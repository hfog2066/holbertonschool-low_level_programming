#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - prints num to 98
 *@n: starntig number for count
 *Description: prints all natural numbers fron n to 98.
 *
 *Return: 0.
 */
void print_to_98(int n)
{
if (n < 99)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
break;
printf(", ");
}
putchar('\n');
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
break;
printf(", ");
}
putchar('\n');
}
}
