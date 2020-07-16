#include "3-calc.h"

/**
 *op_add - add two numbers.
 *@a: first number.
 *@b: second number.
 *
 *Return: result.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substrac numbers.
 *@a: first number.
 *@b: second number.
 *
 *Return: result.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers.
 *@a: first number.
 *@b: second number.
 *
 *Return: result.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divide 2 numbers.
 *@a: first number.
 *@b: second number.
 *
 *Return: result.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - module of two numbers.
 *@a: first number.
 *@b: second number.
 *
 *Return: result.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
