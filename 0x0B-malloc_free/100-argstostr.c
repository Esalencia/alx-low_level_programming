#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to a string of pointers to strings
 * Return: address of the newly allocated memory
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}

	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);

	index = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[index++] = av[a][b];

		s[index++] = '\n';
	}

	s[size] = '\0';

	return (s);
}
