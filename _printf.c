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
	char ff, f;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		f = format[i];
		if (f == '%')
		{
			ff = format[i + 1];
			if (ff == 'c' || ff == 's' || ff == 'd' || ff == 'd' || ff == 'i'
				|| ff == 'b' || ff == 'u' || ff == 'o' || ff == 'x' || ff == 'X' || ff == 'r')
			{
				ret += get_op_func(ff)(ptr);
			}
			else if (ff == '%')
			{	
				ret += write(1, &ff, 1);
			}
			else
			{
				ret += write(1, &f, 1);
				ret += write(1, &ff, 1);
			}
			i++;
		}
		else
			ret += write(1, &f, 1);
	}
	va_end(ptr);
	return (ret);
}
