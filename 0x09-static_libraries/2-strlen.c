#include "main.h"

/**
* _strlen - returns length of string
* @s: argument
* Return: integer value
*/

int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
count += 1;
s++;
}
return (count);
}
