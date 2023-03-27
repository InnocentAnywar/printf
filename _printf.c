#include "main.h"

/**
 * _printf - main function to print output according to
 * given format.
 * @format: array to print nd check type.
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list arr;
		int (*o)(va_list);

		va_start(arr, format);
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		count = 0;
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					o = get_func(format[i + 1]);
					count += (o ? o(arr) : _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				count += _putchar(format[i]);
		}
		va_end(arr);
	}
	return (count);
}
