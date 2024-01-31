#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - the function
 * @form: the str that pass
 * Return: the size of str printed
 */
int _printf(const char *form, ...)
{
	va_list ptr;
	int i, ret = 0;
	char f;
	char *s;

	if (form == NULL)
		return (-1);
	va_start(ptr, form);
	for (i = 0; form && form[i] != '\0'; i++)
	{
		if (form[i] == '%')
		{
			if (form[i + 1] == 's')
			{
				s = va_arg(ptr, char *);
				ret += write(1, s, _strlen(s));
			}
			else if (form[i + 1] == 'c')
			{
				f = va_arg(ptr, int);
				ret += write(1, &f, 1);
			}
			else if (form[i + 1] == '%')
			{
				ret += write(1, &form[i], 1);
			}
			else
			ret += write(1, &form[i], 1);
		i++;
		}
		else
			ret += write(1, &form[i], 1);
	}
	va_end(ptr);
	return (ret);
}
