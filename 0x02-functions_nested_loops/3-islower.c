#include "main.h"

/**
 * _islower - checks if the character is lowercase or not.
 * @c: This is the character
 * Return: 0.
 */

int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
