#include "holberton.h"

/**
 *print_number - prints an integer.
 *@n: input integer.
 *Return: 0.
 */
void print_number(int n)
{
	unsigned int m, d, a;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	a = 1;

	while (d > 9)
	{
		d /= 10;
		a *= 10;
	}

	for (; a >= 1; a /= 10)
	{
		_putchar(((m / a) % 10) + 48);
	}
}
