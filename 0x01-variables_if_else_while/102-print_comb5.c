#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print combination of numbers 0 - 9'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k, m, o, n;
i = j = k = m = 48;
while (m < 58)
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
				o = (m * 10) + k;
				n = (j * 10) + i;
				if (o < n)
				{
					putchar(m);
					putchar(k);
					putchar(' ');
					putchar(j);
					putchar(i);
					if (m == 57 && k == 56 && j == 57 && i == 57)
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
	m++;
}
putchar('\n');
return (0);
}
