#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	/*int len, len2;*/

	/*len = printf("%!\n");
	len2 = _printf("%!\n");
	printf("%d\n", len);
	printf("%d\n", len2);*/
	printf("%r\n", "olleh");
	_printf("%r\n", "olleh");
	printf("%R\n", "Hello");
	_printf("%R\n", "Hello");
	_printf("%R\n", NULL);
	_printf("%R\n", NULL);
	/*len = printf("%s beihaqi\n", "hicham");
	len2 = _printf("%s beihaqi\n", "hicham");
	printf("%d\n", len);
	printf("%d\n", len2);*/
	return (0);
}
