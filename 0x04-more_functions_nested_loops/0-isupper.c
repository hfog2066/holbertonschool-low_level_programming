#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - checks uppercase character.
 *
 *Return: 1 if c is uppercase.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
