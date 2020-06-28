#include "holberton.h"
/**
 *_memset - fills memory with a constant byte.
 *@s: string.
 *@b: constant byte.
 *@n: bytes filled.
 *
 *Return: pointer to destination.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
