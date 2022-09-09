#include <unistd.h>

/**
 * main -Print a text
 *
 * Return: Always 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\" -Dora Korpor, 2015-10-19\n", 59);
	return (1);
}
