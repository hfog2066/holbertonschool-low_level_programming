#include <stdio.h>

/*
 *main - prints numbers 00 to 99
 *
 *Return: Always 0
 */

int main(void)
{
	int i, j, k, h, op1, op2;

	i = j = k = h = 48;
	while (h < 58)
	{
		k = 48;
		while (k < 58)
		{
			j = 48;
			while (j < 58)
			{
				i = 48;
				while (i < 58)
				{
					op1 = (h * 10) + k;
					op2 = (j * 10) + i;
					if (op1 < op2)
					{
						putchar(h);
						putchar(k);
						putchar(' ');
						putchar(j);
						putchar(i);
						if (h == 57 && k == 56 && j == 57 && i == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				j++;
			}
			k++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}
