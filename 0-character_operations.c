#include "main.h"

/**
 * print_char - prints characters
 * @arr: store the list of characters
 * Return: number of parameters printed
 */
int print_char(va_list arr)
{
	int c = va_arg(arr, int);

	return (_putchar(c));
}

/**
 * print_string - prints string
 * @arr: store the list of characters
 * Return: number of parameters printed
 */
int print_string(va_list arr)
{
	int i, count = 0;
	char *str;

	str = va_arg(arr, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i]; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
