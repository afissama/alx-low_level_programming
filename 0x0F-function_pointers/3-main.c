#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry function
 *
 * @argc: number of arguments
 * @argv: args passed
 * Return: int defined success status
 */
int main(int argc, char *argv[])
{
	int num_1, num_2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((num_2 == 0) &&
	((strcmp("/", argv[2]) == 0) || strcmp("%", argv[2]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(num_1, num_2));

	return (0);
}
