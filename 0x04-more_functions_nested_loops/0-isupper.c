#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * return:0 0r 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
