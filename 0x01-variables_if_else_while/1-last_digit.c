#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -Show last digit
 *
 *Description: Print last digit store in
 *a variable n
 *Return: 0 at the end of routine.
 */
int main(void)
{
int n, last_dig;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_dig = n % 10;
if (last_dig > 5)
printf("last digit of %i is %i and is greater than 5\n", n, last_dig);
else if (last_dig == 0)
printf("last digit of %i is %i and is 0\n", n, last_dig);
else if (last_dig < 6)
printf("last digit of %i is %i and is less than 6 and not 0\n", n, last_dig);
return (0);
}
