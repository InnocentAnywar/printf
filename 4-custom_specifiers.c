#include "main.h"

/**
 * print_STRING - prints string with non printable
 * characters (0 < ASCII value < 32 or >= 127)
 * @arr: list of arguments
 * Return: number of arguments printed
 */

int print_STRING(va_list arr)
{
	int i, count = 0;
	char *str, *res;

	str = va_arg(arr, char *);
	if (str == NULL)
	{
		str = "(null)"
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(str[i], 16, 0);
			if (!res[1])
			{
				count += _putchar('0');
			}
			count += _puts(res);
		}
		else
		{
			count += _putchar(s[i]);
		}
	}
	return (count);
}
