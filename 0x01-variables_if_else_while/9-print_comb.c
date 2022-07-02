#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
*
* Return: Always 0.
*/
int main(void)
{
int d = '0';

while (d <= '9')
{
putchar(d);
if (d != '9')
{
putchar(',');
putchar('');
}
d++;
}
putchar('\n');
return (0);
}
