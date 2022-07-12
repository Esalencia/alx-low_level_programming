#include "main.h"

/**
* _puts - print out string to the stdout
* @str: argument
* Return: void
*/


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
