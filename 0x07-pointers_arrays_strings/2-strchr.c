#include "holberton.h"

/**
 *_strchr - locates a cgaracter in a string.
 *@s: string.
 *@c: character.
 *Return: a pointer to the first occurrence of the
 *character c in the string s, or NULL if the
 *character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
