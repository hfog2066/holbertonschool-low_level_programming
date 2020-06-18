#include "holberton.h"

/*
 * main - print prime numbers
 *
 *Return: 0
 *
 */
int main(void)
{
	long int n, pn;

	n = 612852475143;
	for (pn = 2; pn <= n; pn++)
	{
		if (n % pn == 0)
		{
			n /= pn;
			pn--;
		}
	}
	printf("%ld\n", pn);
	return (0);
}
