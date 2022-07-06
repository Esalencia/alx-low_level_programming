#include "main.h"
/**
*print_last_digit - print the last digit of a number
*@n: int type number
*Return: return value of last digit
*/
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = n * -1;
}
_putchar ('0' + n);
return (n);
}
