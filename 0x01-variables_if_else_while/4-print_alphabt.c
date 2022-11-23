#include <stdio.h>

/**
 *main-> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
	if (ch != 113 && ch != 101)
	{
		putchar(ch);
	}
	}

	putchar(10);

	return (0);
}
