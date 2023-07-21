#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: the comma and space
 * @n: the numbers of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(numbers, int);
		printf("%d", result);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);

	printf("\n");
}
