#include <stdio.h>
/**
 *main -show numbers
 *
 *Description: print numbers 0-9
 *with putchar.
 *
 *Return: 0 at the end of the routine.
 */
int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
putchar(num);
putchar('\n');
return (0);
}
