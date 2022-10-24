#include <stdio.h>
#include "main.h"
/**
 * swap_int - function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
