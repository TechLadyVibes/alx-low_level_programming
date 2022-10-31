#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @n: integer
 * @s: points to memory area
 * @b: constant byte
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)

		s[a] = b;
	return (s);
}
