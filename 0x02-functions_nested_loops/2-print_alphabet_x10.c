#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10() - to print lowercase of alphabet 10 times.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int i;
	char m;

	for (i = 0; i < 10; ++i)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
