#include <stdio.h>
/**
 *main -show numbers
 *
 *Description: Print 0-9 numbers.
 *
 *Return: 0 at the en of the routine.
 */
int main(void)
{
int num = 0;
while (num < 10)
printf("%i", num++);
printf("\n");
return (0);
}
