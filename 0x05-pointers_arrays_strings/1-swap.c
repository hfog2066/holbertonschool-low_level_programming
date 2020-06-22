#include "holberton.h"
/**
 * _strlen - returns the lenght of a string.
 * @s: input string.
 * RETURN: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
