#include "main.h"
/**
 * malloc_checked - functions that allocates memory
 * @b: interger
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
