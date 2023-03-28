#include "main.h"

/**
 * print_octal - prints int to octal
 * @arr: list of arguments
 * Return: number of arguments printed
 */

int print_octal(va_list arr)
{
	unsigned int i, count, num, n, oct[100];

	i = 0, count = 0;
	num = va_arg(arr, int);

	if (num < 1)
	{
		_putchar('0');
		count++;
		return (count);
	}
	else
	{
		while (num > 0)
		{
			n = num % 8;
			num /= 8;
			oct[count] = n;
			count++;
		}
		i = count - 1;
		while (i > 0)
		{
			_putchar('0' + oct[i]);
			i--;
		}
		_putchar('0' + oct[i]);
	}
	return (count);
}

/**
 * print_hex - prints unsigned int to hexadecimal
 * @arr: list of arguments
 * Return: number of characters printed
 */

int print_hex(va_list arr)
{
	unsigned int num;
	int count, i;
	char buffer[100];

	num = va_arg(arr, unsigned int);
	count = 0, i = 0;
	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}
	while (num != 0)
	{
		unsigned int remainder = num % 16;

		if (remainder < 10)
		{
			buffer[i++] = 48 + remainder;
		}
		else
		{
			buffer[i++] = 87 + remainder;
		}
		num /= 16;
	}
	while (i--)
	{
		count += _putchar(buffer[i]);
	}
	return (count);
}
