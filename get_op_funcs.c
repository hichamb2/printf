#include "main.h"
/**
 * get_op_func - function
 * @s: the operation
 * Return: an int
 */
int (*get_op_func(char s))(va_list)
{
	op_t ops[] = {{'s', p_list_str}, {'c', p_list_char},
			{'i', p_list_num}, {'d', p_list_num},
			{'b', p_list_bin}, {'o', p_list_octal},
			{'x', p_list_hexa_low}, {'X', p_list_hexa_upr},
			{'%', _percent}, {'r', p_list_rev}};
	int i = 0;

	while (i <= 9)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
