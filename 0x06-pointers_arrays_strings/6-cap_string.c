#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *@s: input string.
 *Return: pointer to dest.
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + a) >= 97 && *(s + a) <= 122)
		*(s + a) = *(s + a) - 32;
	a++;
	while (*(s + a) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + a) == sep_words[i])
			{
				if ((*(s + (a + 1)) >= 97) && (*(s + (a + 1)) <= 122))
					*(s + (a + 1)) = *(s + (a + 1)) - 32;
				break;
			}
		}
		a++;
	}
	return (s);
}
