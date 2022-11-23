#include "main.h"
/**
 *_isupper - function that checks for uppercase character
 *@c: is a character
 *Return: returns 0 and 1 de+pending on the condition
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
