#include <stdio.h>
#include "function_pointers.h"

/**
 * printer_name - prints a name
 * @name: name to print
 *
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		return;
	f(name);
}
