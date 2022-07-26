#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: string of chars
 * Return: address of the newly allocated memory
 */
char *_strdup(char *str)
{
	int x = 1, y = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[x])
		x++;
	s = (char *)malloc(x * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (y < x)
	{
		s[y] = str[y];
		y++;
	}
	s[y] = '\0';
	return (s);
}
