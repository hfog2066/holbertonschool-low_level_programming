#include "holberton.h"
/**
 *main - show 0, 1
 *
 *Description: check alphabetic character.
 *
 *Return: 0.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
