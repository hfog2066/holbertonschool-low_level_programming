#include <stdio.h>
/**
 *main -show letters
 *
 *Description: Print alphabet in reverse
 *
 *Return: 0 at the end of the routine.
 */
int main(void)
{
char cba;
for (cba = 'z'; cba >= 'a'; cba--)
putchar(cba);
putchar('\n');
return (0);
}
