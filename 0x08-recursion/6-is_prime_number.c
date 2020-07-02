#include "holberton.h"

/**
 *is_prime - detect if a number is prime.
 *@n: int number.
 *@c: iterator.
 *Return: 1 if is prime number 0 if not a prime number.
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 *is_prime_number - return 1 if number is prime, 0 if not.
 *@n: int number.
 *Return: 1 if is prime number 0 if no a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
