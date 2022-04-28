#include "main.h"

/**
 * is_prime - function that returns a 1 if a prime number is found
 * @n: is the number to be determined
 * @i: is the integer parameter
 * Return: either 0 or 1
 */

int is_prime(int n, int i)
{
	if (n == 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % i != 0 && i < n)
	{
		is_prime(n, i + 1);
		return (1);
	}
	return (0);
}

/**
 * is_prime_number - function that returns 1 if a prime number
 * @n : number to be determined either prime or not
 * Return: either 0 or 1
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

