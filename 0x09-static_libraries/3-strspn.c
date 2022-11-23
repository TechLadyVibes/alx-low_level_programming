#include "main.h"
#include <stdio.h>
/**
 * _strspn - length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: numbers of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0, c, e = 0;

	while (accept[k])
	{
		c = 0;

		while (*(s + c) != 32)
		{
			if (*(accept + k) == *(s + c))
			{
				e++;
			}
			c++;
		}
		k++;
	}
	return (e);
}
