#include "function_pointers.h"

/**
 *array_iterator - exec function.
 *@array: input integer array.
 *@size: size of the array.
 *@action: pointer function.
 *
 *Return: 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
