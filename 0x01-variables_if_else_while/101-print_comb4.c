#include <stdio.h>

/**
 *main - prints numbers between 012 to 789
 *
 *Return: Always 0
 */

int main(void)
{
	int i, j, k;

	i = 48;
	j = 48;
	k = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (j != i && j != k && i != k && j < i && i < k)
				{
					putchar(j);
					putchar(i);
					putchar(k);
					if (i == 56 && j == 55 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
