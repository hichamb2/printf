#include "main.h"
/**
 * p_list_char - writes the character c to stdout
 * @ptr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_list_char(va_list ptr)
{
	char c = va_arg(ptr, int);

	return (write(1, &c, 1));
}
/**
 * p_list_str - writes the character c to stdout
 * @ptr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_list_str(va_list ptr)
{
	char *str = va_arg(ptr, char *);
	int ret = 0;

	if (str == NULL)
		str = "(null)";
	ret += write(1, str, _strlen(str));
	return (ret);
}
/**
 * p_list_num - writes the character c to stdout
 * @ptr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_list_num(va_list ptr)
{
	int n = va_arg(ptr, int);

	return (print_number(n));
}
/**
 * p_list_bin - writes the character c to stdout
 * @ptr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_list_bin(va_list ptr)
{
	int b = va_arg(ptr, unsigned int);

	return (print_binary(b));
}
/**
 * p_list_octal - writes the character c to stdout
 * @ptr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_list_octal(va_list ptr)
{
	unsigned int oct = va_arg(ptr, unsigned int);

	return (print_octal(oct));
}
