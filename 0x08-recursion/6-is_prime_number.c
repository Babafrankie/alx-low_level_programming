#include "main.h"

/**
 * _is_prime_number - find natural square root
 * @n: int
 * Return: int
 */

int _is_prime_number(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 *
 * Return: int
 */
int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);
}
