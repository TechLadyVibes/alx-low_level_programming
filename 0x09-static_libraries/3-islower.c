#include "main.h"

/**
 * _islower - checks if the character is a lowercase
 * @c: is a character
 * Return: returns 1 and 0 depending on the condition
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

