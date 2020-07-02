#include "holberton.h"

/**
 *power_operation - returns natural square root of number.
 *@n: integer number.
 *@c: iteractor.
 *Return: square root or -1.
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 *_sqrt_recursion - return the natural square root of a number.
 *@n: number integer.
 *Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
