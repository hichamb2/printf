#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>


int _printf(const char *format, ...);
int print_binary(unsigned int n);
int print_number(int n);
int print_octal(unsigned int n);
int print_hexa_low(unsigned int n);
int print_hexa_upr(unsigned int n);


int _putchar(char c);
int _strlen(char *s);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char op;
	int (*f)(va_list ptr);
} op_t;

int (*get_op_func(char s))(va_list);
int p_list_char(va_list ptr);
int p_list_str(va_list ptr);
int p_list_num(va_list ptr);
int p_list_bin(va_list ptr);
int p_list_octal(va_list ptr);
int p_list_hexa_low(va_list ptr);
int p_list_hexa_upr(va_list ptr);
int _percent(va_list ptr);
#endif