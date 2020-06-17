#include "holberton.h"
#include <stdio.h>
/**
 * print_sign - print sign number
 *
 *Description: print sign of a number.
 *
 *Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
