#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the last digit of numbers
 * Return: 0
 */
int main(void)
{
	int n;
	int last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d  and is greater than 5\n", n, last);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d  and is zero\n", n, last);
	} else
	{
		printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
