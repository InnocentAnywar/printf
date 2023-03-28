#include "main.h"

/**
 * print_binary - converts decimals in binary
 * @binary: store the argument values
 * Return: the count
 */

int print_binary(va_list binary)
{
	unsigned int i, count, num, bin, arr[32];

	i = 0, count = 0;
	num = va_arg(binary, int);
	if (num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}
	else
	{
		while (num > 0)
		{
			bin = num % 2;
			num /= 2;
			arr[count] = bin;
			count++;
		}
		i = count - 1;
		while (i > 0)
		{
			_putchar('0' + arr[i]);
			i--;
		}
		_putchar('0' + arr[i]);
	}
	return (count);
}
