#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: numbers of strings passed
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, const char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
