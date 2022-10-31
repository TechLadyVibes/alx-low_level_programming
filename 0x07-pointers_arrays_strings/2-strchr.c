#include "main.h"

/**
 * _strchr - locates a character c in a string s
 *  @s: string
 *  @c: character in string
 *  Return: string from character found
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (*(s + a))
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
