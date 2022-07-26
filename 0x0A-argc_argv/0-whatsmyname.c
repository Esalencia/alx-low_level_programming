#include <stdio.h>

/**
 * main -> program that prints its name
 * @argc: argument count
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
