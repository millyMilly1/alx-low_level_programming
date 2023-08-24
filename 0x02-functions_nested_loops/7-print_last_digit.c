#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @p: variable to be checked
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int p)
{
	int n;

	n = p % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
	_putchar('\n');
}
