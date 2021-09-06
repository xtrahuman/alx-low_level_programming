#include "main.h"
#include "string.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int d;

	d = strlen(s);
	while (d >= 0)
	{
		_putchar(s[d]);
		d--;
	}
	_putchar('\n');
}
