#include "main.h"

/**
 * print_decimal - print decimal(base 10) (%d)
 * @arr: stores the value of argument
 * Return: counter print numbers
 */

int print_decimal(va_list arr)
{
	unsigned int n, count, count_stat, num_abs;
	int num;

	num = va_arg(arr, int);
	count = 0;

	if (num < 0)
	{
		num_abs = (num * -1);
		count += _putchar('-');
	}
	else
		num_abs = num;

	n = num_abs;
	count_stat = 1;
	while (n > 9)
	{
		n /= 10;
		count_stat *= 10;
	}

	while (count_stat >= 1)
	{
		count += _putchar(((num_abs / count_stat) % 10) + '0');
		count_stat /= 10;
	}
	return (count);
}

/**
 * print_int - prints integers (%i)
 * @arr: store list nhmbers
 * Return: number print
 */
int print_int(va_list arr)
{
	return (print_decimal(arr));
}

/**
 * print_uni - prints unsigned integers
 * @arr: stores list of arguments
 * Return: number of arguments printed
 */
int print_uni(va_list arr)
{
	unsigned int n, count, count_stat, num;

	num = va_arg(arr, int);
	count = 0;
	n = num;
	count_stat = 1;
	while (n > 9)
	{
		n /= 10;
		count_stat *= 10;
	}
	while (count_stat >= 1)
	{
		count += _putchar(((num / count_stat) % 10) + '0');
		count_stat /= 10;
	}
	return (count);
}
