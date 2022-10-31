#include "main.h"

/**
 *  _strstr - Returns a pointer to the beginning of the located substring
 *  @haystack: source string
 *  @needle: substring
 *  Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int b = 0, c = 0;

	while (haystack[b])
	{
		while (needle[c])
		{
			if (haystack[b + c] != needle[c])
			{
				break;
			}
			c++;
		}
		if (needle[c] == '\0')
		{
			return (haystack + b);
		}
		b++;
	}
	return ('\0');
}
