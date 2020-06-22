#include holberton.h
#include <stdio.h>

/**
 *main - takes pointer to int
 *@n: int
 *Return: Always 0.
 */

int reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", &n);
	return (0);
}
