#include "3-calc.h"

/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first int
 * @b: second int
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: first int
 * @b: second int
 * Return: product of the numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 numbers
 * @a: first int
 * @b: second int
 *
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get remainder of the division of 2 number
 * @a: first int
 * @b: second int
 * Return: remainder of division of the numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
