#include <stdio.h>
/**
 *main -Print numbers
 *
 *Description: print numbers 00 - 99
 *
 *Return: 0 at the end of routine.
 */
int main(void)
{
int i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (i + j != 0x72)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
