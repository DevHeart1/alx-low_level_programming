#include <stdarg.h>

/**
 * sum_them_all - sums all arguments passed
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
