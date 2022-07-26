#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int val, x, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5 && val >= 0; x++)
	{
		while (val >= coins[x])
		{
			val -= coins[x];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
