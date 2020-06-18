#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - print 1 if c is a digit.
 * @c: character
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
