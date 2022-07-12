#include "main.h"

/**
* swap_int - swap integer a with b
* @a: first integer
* @b: second integer
* Return: void
*/

void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
