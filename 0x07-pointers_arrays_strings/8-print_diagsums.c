#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals
 * of a square matrix of integers.
 *@a: input pointer.
 *@size: size of the matrix.
 *Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, add1 = 0, add2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			add1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			add2 += *(a + i);
	}
	printf("%d, %d\n", add1, add2);
}
