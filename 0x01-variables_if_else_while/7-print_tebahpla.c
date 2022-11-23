#include <stdio.h>

/**
 * main -> assign a variable function that print
 * the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
