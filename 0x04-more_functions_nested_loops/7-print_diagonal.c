#include "holberton.h"
/**
 *print_diagonal - print characters
 *@n: number of lines
 *
 *Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
