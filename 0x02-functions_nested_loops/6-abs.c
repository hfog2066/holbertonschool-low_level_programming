#include "holberton.h"
#include <stdio.h>
/**
 *main - show absolute value
 *
 *Description: prints absolute value of
 *a integer.
 *
 *Return: 0
 */
int _abs(int num)
{
if (num < 0)
return (num * -1);
else
return (num);
} 
