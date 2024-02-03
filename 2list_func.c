#include "main.h"
/**
 * p_list_hexa_upr - writes the character c to stdout
 * @ptr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_list_hexa_upr(va_list ptr)
{
	unsigned int HEXA = va_arg(ptr, unsigned int);

	return (print_hexa_upr(HEXA));
}
/**
 * p_list_hexa_low - writes the character c to stdout
 * @ptr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_list_hexa_low(va_list ptr)
{
	unsigned int hexa = va_arg(ptr, unsigned int);

	return (print_hexa_low(hexa));
}
/**
 * p_list_rev - prints rev of string
 * @ptr: arg get the str
 * Return: the number of chars printed
 */
int p_list_rev(va_list ptr)
{
	char *s = va_arg(ptr, char *);
	int i, ret = 0;

	if (!s)
	{
		s = ")llun(";
		ret += write(1, s, _strlen(s));
		return (ret);
	}
	i = _strlen(s);
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
		ret++;
	}
	return (ret);
}
/**
 * p_list_rot13 - writes the character c to stdout
 * @ptr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_list_rot13(va_list ptr)
{
	char *str = va_arg(ptr, char *);

	return (rot13(str));
}
int p_list_unsigned(va_list ptr)
{
	unsigned int n = va_arg(ptr, unsigned int);

	return (print_unsigned(n));
}
