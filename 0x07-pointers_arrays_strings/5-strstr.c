#include "holberton.h"

/**
 *_strstr - locates a substring.
 *@haystack: string.
 *@needle: substring.
 *Return: pointer to the beginning of the located
 *substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ahaystack;
	char *bneedle;

	while (*haystack != '\0')
	{
		ahaystack = haystack;
		bneedle = needle;

		while (*haystack != '\0' && *bneedle != '\0' && *haystack == *bneedle)
		{
			haystack++;
			bneedle++;
		}
		if (!*bneedle)
			return (ahaystack);
		haystack = ahaystack + 1;
	}
	return (0);
}
