#include <stdio.h>
#include "main.h"
/**
 * puts2 - function that prints character of a string
 * @str: is the string
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
	
