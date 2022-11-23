#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: is a digit
 * Return: return 0 and 1 depending on the condition
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
