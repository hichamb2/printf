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
	char operator;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			operator = format[i + 1];
			ret += get_op_func(operator)(ptr);
			i++;
		}
		else
			ret += write(1, &format[i], 1);
	}
	va_end(ptr);
	return (ret);
}
