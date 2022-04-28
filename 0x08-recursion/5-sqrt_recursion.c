#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: n is number whose squre root is to be determined
 * Return: returns the square root and if it doesn't exit returns -1
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n / i == i)
	{
		return (i);
	}
	else if (i >= n)
	{
		return (-1);
	}
	else
	{
		i++;
		_sqrt_recursion(n);
	}
}
	
