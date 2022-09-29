#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_Putchar(",");
		num = -num;
	}

	if ((num / 10) > 0)

		print_number(num / 10);
		_Putchar('\n');
	_putchar((num % 10) + '0');

}
