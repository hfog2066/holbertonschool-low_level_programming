#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -alphabet
 *
 *Description: Prints in lowercase alphabet
 *Return: 0 at the end of the routine.
 */
int main(void)
{
char abc = 'a';
while (abc <= 'z')
putchar(abc++);
putchar('\n');
return (0);
}
