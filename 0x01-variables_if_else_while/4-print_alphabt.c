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
char abc = 'a';
while (abc <= 'z')
{
if (abc != 'e' && abc != 'q')
putchar(abc);
abc++;
}
putchar('\n');
return (0);
}
