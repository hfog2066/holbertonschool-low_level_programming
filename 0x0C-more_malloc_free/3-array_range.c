#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers.
 *@min: min value.
 *@max: max value.
 *Return: new pointer of array.
 */

int *array_range(int min, int max)
{
	int *ary;
	int i;

	if (min > max)
		return (NULL);

	ary = malloc(sizeof(*ary) * ((max - min) + 1));

	if (ary == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ary[i] = min;

	return (ary);
}
