#include "holberton.h"

/*
 * main - print prime numbers
 *
 *Return: 0
 *
 */
int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			n = n / i;
		{
			n /= i;
			i++;
		}
	}
	printf("%ld\n", i);
	return (0);
}
