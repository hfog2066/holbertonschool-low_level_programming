#include <stdio.h>
/**
 *main -show numbers
 *
 *Description: print combinations of single-digit numbers.
 *
 *Return: 0 at teh end of the orutine.
 */
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
