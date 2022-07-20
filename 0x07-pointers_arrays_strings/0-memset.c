#include "main.h"
#include <string.h>

/**
* _memset - function that fills memory with a constant byte.
* @s: string
* @b: a charcter
* @n: an integer
* Return:  a string
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
s[x] = b;
x++;
}
return (s);
}
