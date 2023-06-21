#include "main.h"
/**
 * _isalpha(int c) - checks for alphabetic character.
 * @c: character to read
 * Return: 0
 */

int _isalpha(int c)
{
	if (c > 'A' && c <= 'Z' && c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
