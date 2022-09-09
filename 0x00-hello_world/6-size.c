#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: 1 byte(s)\n", sizeof(c));
	printf("size of a int: 4 byte(s)\n", sizeof(i));
	printf("size of a long int: 8 byte(s)\n", sizeof(li));
	printf("size of a long long int: 8 byte(s)\n", sizeof(lli));
	printf("size of a float: 4 byte(s)\n", sizeof(f));
	return (0);
}
