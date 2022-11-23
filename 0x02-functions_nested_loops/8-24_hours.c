#include "main.h"

/**
 * jack_bauer - function that prints every minutes of the day
 * Return: return 0
 */
void jack_bauer(void)
{
	int n, o, p, q;

	for (n = 48; n <= 50; n++)
{
	for (o = 48; o <= 57; o++)
{
	for (p = 48; p <= 53; p++)
{
	for (q = 48; q <= 57; q++)
{
	if (n >= 50 && o >= 52)
	break;
	_putchar (n);
	_putchar (o);
	_putchar (58);
	_putchar (p);
	_putchar (q);
	_putchar ('\n');
}
}
}
}
}
