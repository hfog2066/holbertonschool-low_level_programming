#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 *@s: input string
 *Return: integer.
 */
int _atoi(char *s)
{
	unsigned int cnt = 0, sze = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + cnt) != '\0')
	{
		if (sze > 0 && (*(s + cnt) < '0' || *(s + cnt) > '9'))
			break;

		if (*(s + cnt) == '-')
			pn *= -1;

		if ((*(s + cnt) >= '0') && (*(s + cnt) <= '9'))
		{
			if (sze > 0)
				m *= 10;
			sze++;
		}
		cnt++;
	}

	for (i = cnt - sze; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
