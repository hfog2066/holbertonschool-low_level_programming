#include <stdio.h>
/**
 *main - print arguments receive.
 *@argc: number arguments.
 *@argv: array contains arguments.
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
