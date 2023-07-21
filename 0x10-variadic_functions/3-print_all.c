#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry Point
 * @format: list of arg types (c = char, i = int,
 * f = float, s = char * (if null print (nil)))
 * Description: Prints a variable number of
 * arguments based on the format string.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *separ = ", ";
	char *str;

	va_start(list, format);
	while (format && format[i])
		i++;

	while (format && format[j])
	{
		if (j == (i - 1))
			separ = "";
		switch (format[j])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), separ);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), separ);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), separ);
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separ);
			break;
		default:
			j++;
			continue;
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
