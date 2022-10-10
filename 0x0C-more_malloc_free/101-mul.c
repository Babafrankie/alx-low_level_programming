#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 48 || argv[i][j] < 48)
			{
				printf("error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", mul);

	return (0);
}
