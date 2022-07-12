#include "main.h"
#include <stdio.h>

/**
* print_rev - print a string in reverse
* @s: argument to the function
* Return: return void
*/

void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
	}

	for (n = n - 1; n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
