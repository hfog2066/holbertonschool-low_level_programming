#include "holberton.h"
/**
 *main - show alphabet
 *
 *Description: print alphabet 10 times.
 *
 *Return: 0.
 */
void print_alphabet_x10(void)
{
char *c = "abcdefghijklmnopqrstuvwxyz";
char *t = c;
int i;
for (i = 0; i < 10; i++)
{
while (*c)
_putchar(*(c++));
_putchar('\n');
c = t;
}
}
