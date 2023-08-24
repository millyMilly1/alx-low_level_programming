#include "main.h"

/**
 * _abs - print the absolute value of a number
 *
 * @n: variable to be checked
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
