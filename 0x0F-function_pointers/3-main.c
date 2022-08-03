#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int argA, argB, result;
	char x;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	argA = atoi(argv[1]);
	argB = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	x = *argv[2];

	if ((x == '/' || x == '%') && argB == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(argA, argB);

	printf("%d\n", result);

	return (0);
}
