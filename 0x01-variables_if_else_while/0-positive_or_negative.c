#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -Print a number
 *
 *Description: Show a negative, zero, positive
 *number.
 *Return: 0 at the end of routine.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n", n);
else if (n == 0)
printf("%i is zero\n", n);
else
printf("%i is negative\n", n);
return (0);
}
