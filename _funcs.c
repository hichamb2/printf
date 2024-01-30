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
