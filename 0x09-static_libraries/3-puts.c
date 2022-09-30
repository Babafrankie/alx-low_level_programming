#include "main.h"
#include <stdio.h>

/**
 * _puts - write a function that print a string, followed by a new line,
 * to stdout.
 * @str: this is my input string
 *
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
