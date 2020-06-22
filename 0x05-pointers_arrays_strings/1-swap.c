#include "holberton.h"
/**
 * swap_int - swaps values of two integers.
 *@a: first integer.
 *@b: second integer.
 *Return: 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
