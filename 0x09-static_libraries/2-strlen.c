#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: is a charater
 * Return: lemgth
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
