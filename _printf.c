#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - the function
 * @format: the str that pass
 * Return: the size of str printed
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i, ret = 0;
	char f;
	char *s;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')
			{
				s = va_arg(ptr, char *);
				ret += write(1, s, _strlen(s));
			}
			else if (format[i + 1] == 'c')
			{
				f = va_arg(ptr, int);
				ret += write(1, &f, 1);
			}
			else if (format[i + 1] == '%')
				ret += write(1, &format[i], 1);
			else if (format[i + 1] == 'b')
				ret += print_binary(va_arg(ptr, int));
		i++;
		}
		else
			ret += write(1, &format[i], 1);
	}
	va_end(ptr);
	return (ret);
}
