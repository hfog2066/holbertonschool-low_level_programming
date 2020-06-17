#include "holberton.h"
/**
 *main - show absolute value
 *
 *Description: prints absolute value of
 *a integer.
 *
 *Return: 0
 */
int _abs(int n);
{
if (n < 0)
{
return (~n + 1);
}
else
return (n);
}
