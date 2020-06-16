#include "holberton.h"
/**
 *main -Show Holberton
 *
 *Description: Prints Holberton followed by
 *new line with putchar command
 *
 *Return: 0 at he end of routine.
 */
int main(void)
{
char *c = "Holberton";
while (*c)
_putchar(*(c++));
_putchar('\n');
return (0);
}
