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
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
_putchar('\n');
}
}
