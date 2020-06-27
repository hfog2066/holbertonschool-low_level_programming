#include "holberton.h"

/**
 *_memcpy - copies n bytes from mem area src to dest.
 *@dest: memory destanation.
 *@src: memory area.
 *@n: bytes filled.
 *Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
