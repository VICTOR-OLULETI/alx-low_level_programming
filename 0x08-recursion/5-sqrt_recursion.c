#include "main.h"

/**
 * _sqrt - calculates the natural square and returns the value
 * to the function _sqrt_recursion
 * @n : n is the number whose squre root is being determined
 * @i : i is used to determine the square root
 * Return: square root
 */

int _sqrt(int n, int i)
{
	if (n / i == i)
	{
		return (i);
	}
	if (i >= n)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root
 * of a number
 * @n :integer whose square root is being determined
 * Return: returns the square root value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
