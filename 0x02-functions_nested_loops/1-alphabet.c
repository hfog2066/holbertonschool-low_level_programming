#include "holberton.h"
/**
 *main - show alphabet
 *
 *Description: print alphabet in lowercase
 *followed by a line with _putchar
 *
 *Return: void
 *
 */
int print_alphabet(void)
{
char *c = "abcdefghijklmnopqrstuvwyz";
while (*c)
_putchar(*(c++));
_putchar('\n');
}
