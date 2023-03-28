#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct conv - struct for printer functions
 * @c: flag
 * @f: function
 */
typedef struct conv
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
int print_uni(va_list arr);
int print_octal(va_list arr);
int print_hex(va_list arr);
int print_HEX(va_list arr);
int _puts(char *str);

#endif /* MAIN_H */
