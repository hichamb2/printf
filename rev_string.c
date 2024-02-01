#include "main.h"
/**
 * print_rev - the function that print number of characters
 * @s: the parametre
 * Return: return No thing
 */
int print_rev(char *s)
{
	int i, ret = 0;

	i = _strlen(s);
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
		ret++;
	}
	return (ret);
}
