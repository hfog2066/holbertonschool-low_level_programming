#include "holberton.h"

/**
 *print_square - of character #
 *@size: square dimension
 *
 *Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}

}
