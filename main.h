#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int print_binary(unsigned int n);
int _puts(char *str);
int _putchar(char c);
int _strlen(char *s);

#endif
