#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	unsigned int ui;
	void *addr;
	ui = (unsigned int)INT_MAX + 1024;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);


	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);


	/*_printf("Unsigned:[%u]\n", ui);*/
	printf("Unsigned:[%u]\n", ui);
	len = _printf("Unsigned octal:[%o]\n", 345);
	len2 = printf("Unsigned octal:[%o]\n", 345);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);


	len = _printf("daba%%\n");
	len2 = printf("hadi%%\n");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);


	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	len2 = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Length:[%b, %i]\n", len, len);
	printf("Length:[%b, %i]\n", len2, len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	len = _printf("char:[%c]\n", 'H');
	len2 = printf("char:[%c]\n", 'H');
	_printf("Length:[%b, %i]\n", len, len);
	printf("Length:[%b, %i]\n", len2, len2);


	len = _printf("%");
	len2 = printf("%");
	_printf("Length:[%b, %i]\n", len, len);
	printf("Length:[%b, %i]\n", len2, len2);
	return (0);
}
