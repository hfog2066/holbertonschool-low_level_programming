#include "holberton.h"
#include <stdlib.h>

/**
 *_realloc - realloc memory block.
 *@ptr: pointer.
 *@old_size: size of bytes.
 *@new_size: new size of bytes.
 *Return: ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
