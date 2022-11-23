#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: c is a character
 * Return: returns 1 and 0 depending on the condition
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
