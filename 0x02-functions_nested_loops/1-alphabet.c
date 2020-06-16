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
int letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n'); 
}

