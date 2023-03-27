#include "main.h"

/**
 * print_decimal - print decimal(base 10) (%d)
 * @arr: stores the value of argument
 * Return: counter print numbers
 */

int print_decimal(va_list arr)
{
	unsigned int one, two, three, count;
	int numbers;

	count = 0;
	numbers = va_arg(arr, int);
	if (numbers < 0)
	{
		one = (numbers * -1);
		count += _putchar(45);
	}
	else
	{
		one = numbers;
		two = one;
		three = 1;
	}
	while (two > 9)
	{
		two /= 10;
		three *= 10;
	}
	while (three >= 1)
	{
		count += _putchar(((one / three) % 10) + '0');
		three /= 10;
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
