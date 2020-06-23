#include "holberton.h"
/**
 *_strlen - Return the length of string.
 * @s: char *
 *
 *RETURN: length of string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
