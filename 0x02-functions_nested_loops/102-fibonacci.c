#include "main.h"
#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	long int a = 0;
	long int b = 1;
	long int c = 0;
	int i;

	printf("%ld, ", b);
	for (i = 0; i <= 50; i++)
	{
		a = b;
		b = c;
		c = a + b;
		if (i > 1 && i < 50)
		{
			printf("%ld, ", c);
		}
		if (i > 1 && i == 50)
		{
			printf("%ld\n", c);
		}
	}
	return (0);
}
