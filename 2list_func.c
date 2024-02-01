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
