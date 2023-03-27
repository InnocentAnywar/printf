#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct convs - struct for printer functions
 * @type
 * @c: flag
 * @f: function
 */
typedef struct convs
{
	char *c;
	int (*f)(va_list);
} conv_t;

/* FUNCTION PROTOTYPES */
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(char s))(va_list arr);
int print_char(va_list arr);
int print_string(va_list arr);
int print_decimal(va_list arr);
int print_int(va_list arr);
int print_binary(va_list binary);

#endif /* MAIN_H */
