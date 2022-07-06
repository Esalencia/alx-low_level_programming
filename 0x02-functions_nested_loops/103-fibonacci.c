#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	unsigned long int x, y, next, sum;

	x = 1;
	y = 2;
	sum = 0;

	for (n = 1; n <= 33; ++n)
	{
		if (x < 4000000 && (x % 2) == 0)
		{
			sum = sum + x;
		}
		next = x + y;
		x = y;
		y = next;
	}

	printf("%lu\n", sum);

	return (0);
}
