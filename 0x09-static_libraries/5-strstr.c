#include "main.h"
/**
 *_strstr-finds the first occurrence of the substring
 *@haystack:substring
 *@needle:string to be checked.
 *Return:Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *x = haystack;
		char *y = needle;

		while (*haystack && *y && *haystack == *y)
		{
			haystack++;
			y++;
		}

		if (!*y)
			return (x);

		haystack = x + 1;
	}
	return ('\0');
}
