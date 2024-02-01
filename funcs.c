#include "main.h"
/**
 * _strlen - function that retun nul of cart
 * @s: par
 * Return: size
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _percent - the function that print number of characters
 * @ptr: the parametre
 * Return: return the number of characters
 */
int _percent(va_list ptr)
{
	(void) ptr;

	return (write(1, "%%", 1));
}
