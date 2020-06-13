#include <stdio.h>
#include <ctype.h>
/**
 *main -show numbers
 *
 *Description: print numbers of base 16
 *hexadecimals in lower case.
 *
 *Return: 0 at the end of the routine.
 */
int main(void)
{
char *hex = "0123456789abcdef";
while (*hex)
putchar(*(hex++));
putchar('\n');
return (0);
}
