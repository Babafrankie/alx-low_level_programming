#include "main.h"
#include <stdio>

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
 * is_prime_number - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int is_prime_number(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (is_prime_number(n, val + 1));
	else
		return (-1);

}
