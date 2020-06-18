#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - checks uppercase character.
 * @c: character
 * Return: 1 if c is uppercase.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
