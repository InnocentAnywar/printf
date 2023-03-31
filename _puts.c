#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: pointer to string
 * Return: number of characters written
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
