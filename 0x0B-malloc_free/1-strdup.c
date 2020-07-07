#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a new allocated.
 *@str: string.
 *Return: 0.
 *
 */

char *_strdup(char *str)
{
	char *strnew;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strnew = (char *)malloc(sizeof(char) * (i + 1));

	if (strnew == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strnew[j] = str[j];

	return (strnew);
}
