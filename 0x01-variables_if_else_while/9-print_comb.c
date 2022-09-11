#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - printing number from 0-9 with commas and space between them
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * REturn: Always 0
 */
int main(void)
{
	int d;
	
	for (d = '0'; d <= '9'; d++)
		putchar(d);
		putchar('\n');

	return (0);
}
