#include "holberton.h"
/**
 *_memset - fills memory with a constant byte.
 *@s: memory area.
 *@b: constant byte.
 *@n: bytes filled.
 *Return: pointer to destination.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + 1) = b;

	return (s);
}
