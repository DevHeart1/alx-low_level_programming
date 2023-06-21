#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet, in lowercase.
 * Return: return nothing
 */

void print_alphabet_x10(void)
{
	int i;
	int p;

	for (i = 0; i < 10; i++)
	{
		for (p = 'a'; p <= 'z'; p++)
			_putchar(p);

		_putchar('\n');
	}
}
