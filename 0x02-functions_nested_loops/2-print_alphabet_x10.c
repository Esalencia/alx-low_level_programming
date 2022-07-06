#include "main.h"

/**
* print_alphabet_x10() - to print lowercase of alphabet 10 times.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int b;
char c = 'a';
for (b = 0 ; b < 10 ; b++)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
return (0);
}
}
