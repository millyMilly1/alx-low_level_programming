#include "main.h"

/**
 * _isdigit - check for a number
 * @c: variable to be checked
 * Return: 1 if c is a number, 0 if its not a number.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
