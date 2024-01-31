#include "main.h"
/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
 * Return: the byts returned
 */
int print_number(int n)
{
	unsigned int num = n;
	int ret = 0;
/*first check if its negative*/
	if (n < 0)
	{
		ret += _putchar('-');
		num = -num;
	}
/*print the first few digits*/
	if ((num / 10) > 0)
		ret += print_number(num / 10);
/*print the last digit*/
	ret += _putchar((num % 10) + 48);
	return (ret);
}
