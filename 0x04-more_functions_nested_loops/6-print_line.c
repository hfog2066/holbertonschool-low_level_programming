#include "holberton.h"

/**
 *print_line - numbers
 *@n: number of lines
 *
 *Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
