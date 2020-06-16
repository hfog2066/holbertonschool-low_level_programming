#include "holberton.h"
/**
 *main - show alphabet
 *
 *Description: print alphabet in lowercase
 *followed by a line with _putchar
 *
 *Return: 0 at the end of routine
 *
 */
int main(void)
{
char *c = "abcdefghijklmnopqrstuvwyz";
while (*c)
_putchar(*(c++));
_putchar('\n');
}
