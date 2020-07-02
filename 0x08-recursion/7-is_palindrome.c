#include "holberton.h"

/**
 *_strlen_recursion - length of string.
 *@s: string.
 *Return: length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *comp - compares string characters.
 *@s: string.
 *@n1: small.
 *@n2: big.
 *Return: 0.
 */
int comp(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 *is_palindrome - return 1 if string is a polindrome and 0 if not.
 *@s: string.
 *Return: 1 if string is a polinfrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
