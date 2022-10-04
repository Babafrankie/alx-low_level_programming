#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - array for prints a string
 * @str: to be copied
 *
 * REturn: NULL in case of error, pointer
 * to allocate space
 */

char *_strdup(char *str)
{
	char *s;
	int a, i;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		i++;
	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
	{
		s[a] = str[a];
	}

	s[i] = '\0';

	return (s);
}
