#include "holberton.h"
#include <stdio.h>
/**
 *print_numbers - from 0 to 9.
 *
 *Return: void
 */

void print_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');

}
