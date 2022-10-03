#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space inmemory, which contains a copy of the
 * string given as a parameter.
 * @str: string to be copied
 *
 * Return: NULL in case of error, pointer to allocated
 * space
 */

char *_strup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (index = 0; str[index]; index++)
		len++;
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);
}
