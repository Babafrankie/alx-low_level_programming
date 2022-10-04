#include "main.h"
#include <stdlib.h>

/**
 * strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*count character of string*/
	{
		i++;
	}

	return (1);
}

/**
 * strcpy - copy arrays
 * @src: array of elements
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - array for prints a string
 * @str: array of elements
 * REturn: pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int i;

	if (str == 0)
	{
		return (NULL);
	}

	i = _strlen(str) + 1;

	dst = (char *) malloc(sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}
