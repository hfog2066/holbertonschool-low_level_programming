#include "function_pointers.h"

/**
 *int_index - search integer.
 *@array: input integer array.
 *@size: size array.
 *@cmp: pointer function.
 *
 *Return: 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
