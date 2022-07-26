#include <stdlib.h>

/**
* main -> program that multiplies two numbers.
* @argc: argc parameter
* @argv: an array of a command listed
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int result, x, y;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);
	return (0);
}
