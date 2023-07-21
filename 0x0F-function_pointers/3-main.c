#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calls the needed function
 * @argc: amount ar arguments
 * @argv: array of argument strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, output;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	output = op_func(num1, num2);

	printf("%d\n", output);


	return (0);
}
