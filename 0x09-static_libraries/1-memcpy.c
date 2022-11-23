#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: Area copied to
 * @src: source memory
 * @n: numner of byte to be copied
 * Return: string coped from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
