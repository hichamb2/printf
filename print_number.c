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
/**
 * print_binary - convert to binary
 * @n: numero in decimal
 * Return: number of characters printed
 */
int print_binary(unsigned int n)
{
	unsigned int bin, flag, i, digit, num;
	int count = 0;

	if (n != 0)
	{
		num = n;
		bin = 0;
		while (num != 0)
		{
			num /= 2;
			bin++;
		}
		flag = 1;
		for (i = 1; i <= bin - 1; i++)
			flag *= 2;
		for (i = 1; i <= bin; i++)
		{
			digit = n / flag;
			_putchar(digit + '0');
			count++;
			n -= digit * flag;
			flag /= 2;
		}
	}
	else
	{
		_putchar('0');
			return (1);
	}
	return (count);
}
/**
 * print_octal - convert to octal
 * @n: decimal number
 * Return: number of characters printed
 */
int print_octal(unsigned int n)
{
	unsigned int oct, flag, i, digit, num;
	int count = 0;

	if (n != 0)
	{
		num = n;
		oct = 0;
		while (num != 0)
		{
			num /= 8;
			oct++;
		}
		flag = 1;
		for (i = 1; i <= oct - 1; i++)
			flag *= 8;
		for (i = 1; i <= oct; i++)
		{
			digit = n / flag;
			print_number(digit);
			count++;
			n -= digit * flag;
			flag /= 8;
		}
	}
	else
	{
		print_number(0);
		return (1);
	}
	return (count);
}
/**
 * print_hexa_low - convert to octal
 * @n: decimal number
 * Return: number of characters printed
 */
int print_hexa_low(unsigned int n)
{
	unsigned int hex, flag, i, digit, num;
	int count = 0;

	if (n != 0)
	{
		num = n;
		hex = 0;
		while (num != 0)
		{
			num /= 16;
			hex++;
		}
		flag = 1;
		for (i = 1; i <= hex - 1; i++)
			flag *= 16;
		for (i = 1; i <= hex; i++)
		{
			digit = n / flag;
			if (digit < 10)
				print_number(digit);
			else
				_putchar(digit - 10 + 'a');
			count++;
			n -= digit * flag;
			flag /= 16;
		}
	}
	else
	{
		print_number(0);
		return (1);
	}
	return (count);
}
/**
 * print_hexa_upr - convert to octal
 * @n: decimal number
 * Return: number of characters printed
 */
int print_hexa_upr(unsigned int n)
{
	unsigned int hex, flag, i, digit, num;
	int count = 0;

	if (n != 0)
	{
		num = n;
		hex = 0;
		while (num != 0)
		{
			num /= 16;
			hex++;
		}
		flag = 1;
		for (i = 1; i <= hex - 1; i++)
			flag *= 16;
		for (i = 1; i <= hex; i++)
		{
			digit = n / flag;
			if (digit < 10)
				print_number(digit);
			else
				_putchar(digit - 10 + 'A');
			count++;
			n -= digit * flag;
			flag /= 16;
		}
	}
	else
	{
		print_number(0);
			return (1);
	}
	return (count);
}
