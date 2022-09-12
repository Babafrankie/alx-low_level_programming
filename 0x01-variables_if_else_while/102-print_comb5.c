#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print possible combination of two 2-digit number
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int p1 = 0, p2;

	while (p1 <= 99)
	{
		p2 = p1;
		while (p2 <= 99)
		{
			if (p2 != p1)
			{
				putchar((p1 / 10) + 48);
				putchar((p1 % 10) + 48);
				putchar(' ');
				putchar((p2 / 10) + 48);
				putchar((p2 % 10) + 48);

				if (p1 != 98 || p2 != 98)
				{
					putchar(',');
					putchar(' ');
				}
				
			}
			++p2;
		}
		++p1;
	}
	putchar('\n');
	return (0);
}
