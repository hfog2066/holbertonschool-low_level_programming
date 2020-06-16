#include "holberton.h"
/**
 *main - show alphabet
 *
 *Description: print alphabet in lowercase
 *
 *Return: 0 at the end of the routine
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
