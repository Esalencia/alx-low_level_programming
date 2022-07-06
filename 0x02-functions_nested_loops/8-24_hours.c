#include "main.h"
#include <stdio.h>
/**
*jack_bauer - Print every minute of the day of Jack Bauer
*Description: Start from 00:00 to 23:59
*/
void jack_bauer(void)
{
int z = 0;
int n = 0;
while (z <= 24)
{ 
for (n = 0; n < 60; n++)
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
_putchar(':');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar('\n');
}
z++;
}
}
