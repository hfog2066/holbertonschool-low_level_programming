#include <stdio.h>
/**
 *main -Print size of different data types
 *
 *Description: function show the size of char, int, long int
 *long long int, and float data types
 *Return: 0 at the end of the routine
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of char: %lu byte(s)\n", (long int) sizeof(c));
printf("Size of an int: %lu byte(s)\n", (long int) sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (long int) sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", (long int) sizeof(lli));
printf("Size of a float: %lu byte(s)\n", (long int) sizeof(f));
return (0);
}
