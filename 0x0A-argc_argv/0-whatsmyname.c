#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: array of arguments
 * Return: 1
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
