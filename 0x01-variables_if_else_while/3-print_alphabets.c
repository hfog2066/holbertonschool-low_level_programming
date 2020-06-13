#include <stdlib.h>
#include <stdio.h>
/**
 *main -show alphabet
 *
 *Description: print lowercase and uppercase
 *alphabet.
 *Return: 0 at the end of the routine.
 */
int main(void)
{
char abc = 'a';
char ABC = 'A';
while (abc <= 'z')
putchar(abc++);
while (ABC <= 'Z')
putchar(ABC++);
putchar('\n');
return (0);
}
