#include "holberton.h"
/**
 *main - print numbers
 *
 *Description: prints the 9 times table.
 *
 *Return 0.
 */
void times_table(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
int a, b;
a = (x * y) / 10;
b = (x * y) % 10;
if (x * y > 9)
_putchar(a + '0');
_putchar(b + '0');
if (y == 9)
break;
_putchar(',');
_putchar(' ');
if ((x * (y + 1)) < 10)
_putchar(' ');
}
_putchar('\n');
}
}
