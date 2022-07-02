#include <stdio.h>

/**
* main - Prints all single digit numbers of base 16 starting from 0.
*
* Return: Always 0.
*/
int main(void)
{
int d = '0';
while (d <= '15')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
