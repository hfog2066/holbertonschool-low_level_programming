#include "holberton.h"
/**
 *_strncat - concatenates n strings.
 *@dest: destination.
 *@src: source.
 *@n: amount of bytes used by src.
 *Return: the pointer to des.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
