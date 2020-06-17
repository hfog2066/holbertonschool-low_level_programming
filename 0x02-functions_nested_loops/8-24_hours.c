#include "holberton.h"
/**
 *main - print numbers
 *
 *Description: print every minute of the day
 *
 *Return: always 0.
 */
void jack_bauer(void)
{
int hours, minutes;
int a, b, c, d;
for (hours = 0; hours < 24; hours++)
for (minutes = 0; minutes < 60; minutes++)
{
a = hours / 10;
b = hours % 10;
c = minutes / 10;
d = minutes % 10;
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
}
