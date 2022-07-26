#include "main.h"

/**
* _memcpy - function that copies memory area.
* @dest: is destination memory
* @src: is source memory
* @n: number of bytes to be copied
* Return: string copied from source
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
