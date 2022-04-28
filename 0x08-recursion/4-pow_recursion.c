#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y.
 * @x : x is the integer
 * @y : y is the power for x to be raised
 * Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _power_recursion(x, y - 1));
}
