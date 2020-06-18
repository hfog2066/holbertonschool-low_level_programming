#include "holberton.h"
/**
 * more_numbers - print 10 times numbers
 *
 *Return: 0
 *
 */
void more_numbers(void)
{
	int a;
	int i;
	int c;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				c = a % 10;
				_putchar('0' + (a / 10));
			}
			else
				c = a;
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}

