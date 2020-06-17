#include "holberton.h"
/**
 *main - print number
 *
 *Description: print last digit number.
 *
 *Return: Always 0.
 */
int print_last_digit(int arg)
{
int last_digit;
last_digit = (arg % 10);
if (last_digit > 0)
{
_putchar(last_digit + '0');
return (last_digit);
}
else
{
_putchar(last_digit * -1 + '0');
return (last_digit * -1);
}
}
