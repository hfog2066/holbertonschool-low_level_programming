#include "holberton.h"
#include "_putchar.c"
/**
 *main - show alphabet
 *
 *Description: print_alphabet in lowercase.
 *
 *Return: 0.
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
