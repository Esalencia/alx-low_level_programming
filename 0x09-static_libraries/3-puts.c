#include "main.h"
#include <stdio.h>

/**
* _puts - print out string to the stdout
* @str: argument
* Return: void
*/


void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
