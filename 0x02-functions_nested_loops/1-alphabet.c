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
char *c = "abcdefghijklmnopqrstuvwxyz";
while (*c)
_putchar(*(c++));
_putchar('\n');
} 
