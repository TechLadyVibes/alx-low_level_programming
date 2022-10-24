#include <stdio.h>
#include "main.h"
/**
 * print_rev -the function that prints a string in reverse order
 * @s: is the string
 */
void print_rev(char *s)
{
	int r, j, len;

	r = 0;

	while (*(s + r) != '\0')
	{
		r++;
	}

	len = r;

	for (j = len - 1; j >= 0; j--)
	{
		putchar(*(s + j));
	}
	putchar(10);
}
