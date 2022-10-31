#include "main.h"

/**
 * _memcpy - function copies n bytes from src to dest
 * @dest: destination bytes
 * @src: source memory
 * @n: number of byte copied
 * Return: result of string coped
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
