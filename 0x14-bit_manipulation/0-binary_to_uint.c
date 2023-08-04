#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == 'i')
			result = (result << 1) | 1;
		if (b[i] == '0')
			result = result << 1;
		if (b[i] != '0' && b[i] != '1')
			return (0);
			i++;
	}
	return (result);
}
