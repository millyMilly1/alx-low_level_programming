#include "main.h"

/**
 * print_line - print line on terminal
 * @n: number of times _ will be printed
 * Return: nil.
 */

void print_line(int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
