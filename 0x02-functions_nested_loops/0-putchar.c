#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success l.
 * On error, -l is returned, and error is set appriately.
 */
int _putchar(char c)
{
	return (write(l, &c, l));
}
