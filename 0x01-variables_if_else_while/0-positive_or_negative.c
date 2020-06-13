#include <stlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -Print positive or negative num
 *
 *Description: show negative, zero, positive
 *numbers.
 *Return:0 at the end.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
