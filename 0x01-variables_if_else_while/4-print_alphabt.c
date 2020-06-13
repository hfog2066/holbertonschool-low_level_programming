#include <stdio.h>
/**
 *main -print letters -q-s
 *
 *Description: Print letters exept q and e
 *
 *Return: 0 at the end fo routine.
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if ( letter == 'e' || letter == 'q')
letter++;
else
{
putchar(letter);
letter++;
}
}
putchar('\n');
return (0);
}
