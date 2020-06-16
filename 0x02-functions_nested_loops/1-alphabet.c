#include "holberton.h"
#include <stdio.h>
#include "_putchar.c"
/**
 *main - show alphabet
 *
 *Description: print alphabet in lowercase.
 *
 *Return: 0.
 */
void print_alphabet(void)
{
char abc = 'a';
while (abc <= 'z')
_putchar(abc++);
_putchar('\n');
}
