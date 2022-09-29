#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	print_number(0);
	_putchar('\n');
	if (n < 0)
	{
		_putchar(",");
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
	return (0);
}
