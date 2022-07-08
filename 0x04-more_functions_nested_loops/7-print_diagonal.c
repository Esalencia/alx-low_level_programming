#include "main.h"

/**
* print_diagonal - draw diagonal line
* @n: intger variable
*/


void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
