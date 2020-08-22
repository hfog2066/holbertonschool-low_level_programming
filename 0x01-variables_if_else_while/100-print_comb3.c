#include <stdio.h>

/**
 *main - prints numbers 00 to 89
 *
 *Return: Always 0
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (j != 1 && j < i)
			{

				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(',');
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
