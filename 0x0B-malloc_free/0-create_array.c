#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @c: array of chars
 * @size: the size of the memory to print
 * Return: address of the memory to print
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		s[j] = c;

	return (s);
}
