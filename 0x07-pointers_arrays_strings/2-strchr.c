#include "main.h"

/**
* _strchr - function that locates a character in a string.
* @s: string given
* @c: character
* Return: character or NULL
*/
char *_strchr(char *s, char c)
{
int x;

while (1)
{
x = *s++;
if (x == c)
{
return (s - 1);
}
if (x == 0)
{
return (NULL);
}
}
}
