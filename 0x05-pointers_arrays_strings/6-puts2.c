#include "main.h"
#include <stdio.h>

/**
* puts2 - print every other characters
* @str: argument
* Return: return void
*/

void puts2(char *str)
{
	char *ptr = str;
	int x = 0;
	int y;

	while (*ptr != '\0')
	{
		x++;
		ptr++;
	}

	for (y = 0; y <= (x - 1); y++)
	{
		if (y % 2 == 0)
			putchar(str[y]);
	}
	putchar('\n');
}
