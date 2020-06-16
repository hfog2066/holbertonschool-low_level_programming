#include "holberton.h"
/**
 *main - show lowercase character.
 *
 *Description: checks for lowercase
 *character.
 *
 *Return: 0 
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
