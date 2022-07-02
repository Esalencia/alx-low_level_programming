#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10.
*
* Return: Always 0.
*/
int main(void)
{
int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar(‘\n’);
return (0);
}
