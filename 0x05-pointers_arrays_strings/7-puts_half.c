#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string.followed by anew line.
 *
 * @str: this is the input
 */
void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
