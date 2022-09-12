#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print possible combination of two 2-digit number
 * 
 *
 *
 * Return: returns zero at the end
 */
int main(void)
{

	int i, p;

	for (i = 0; i < 100; i++)
	{
		for (p = 0; p < 100; p++)
		{
			if (p > i)
			{
				putchar(i / 10) + '48');
				putchar(i % 10) + '48');
				putchar(' ');
				putchar(p / 10) + '48');
				putchar(p % 10) + '48');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
