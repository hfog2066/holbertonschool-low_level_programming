#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: initial segment.
 *@accept: accepted bytes.
 *Return: number accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, msg;

	for (i = 0; s[i] != '\0'; i++)
	{
		msg = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				msg = 0;
				break;
			}
		}
		if (msg == 1)
			break;
	}
	return (i);
}
