#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates random valid passwords
 *
 *Return: 0
 *
 */

int main(void)
{
	int i = 0, j = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (j < 2772)
	{
		i = rand() % 128;
		if ((j + i) > 2772)
			break;
		j = j + i;
		printf("%j", i);
	}
	printf("%j\n", (2772 - j));
	return (0);
}
