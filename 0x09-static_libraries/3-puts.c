#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string followed by a new line
 * @str: is the string
 * Return 0
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
