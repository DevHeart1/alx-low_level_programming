#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: variable to be read.
 * Return: 0 or.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
