#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two strings.
 *@s1: string 1.
 *@s2: string 2.
 *Return: 0.
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *strnew;
	unsigned int i, j, k, lmt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strnew = malloc(sizeof(char) * (i + j + 1));

	if (strnew == NULL)
	{
		free(strnew);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strnew[k] = s1[k];

	lmt = j;
	for (j = 0; j <= lmt; k++, j++)
		strnew[k] = s2[j];

	return (strnew);
}
