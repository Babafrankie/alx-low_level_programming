#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copiar el contenido de uno a otra variable
 * @dest: this is destiny
 *
 * Return: this return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src--;
	}
	*dest = '\0';
	return (start);
}
