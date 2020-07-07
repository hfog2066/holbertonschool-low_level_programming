#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - create array of chars.
 *@size: size of char.
 *@c: char.
 *Return: 0.
 */

char *create_array(unsigned int size, char c)
{
	char *ca;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ca = malloc(sizeof(c) * size);

	if (ca == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ca[i] = c;

	return (ca);
}
