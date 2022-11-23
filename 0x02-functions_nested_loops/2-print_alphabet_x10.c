#include "main.h"

/**
 * print_alphabet_x10 - function to print a-z  10 times
 *
 * Return 0
 */
void print_alphabet_x10(void)
{
	int ch;
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar(10);
	}
}
