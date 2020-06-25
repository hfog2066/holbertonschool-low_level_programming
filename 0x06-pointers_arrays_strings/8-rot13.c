#include "holberton.h"

/**
 *rot13 - encodes a string.
 *@s: input string.
 *Return: pointer to dest.
 */

char *rot13(char *s)
{
	int a = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + a) == alphabet[i])
			{
				*(s + a) = rot13[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
