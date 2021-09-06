#include "main.h"
#include <stdio.h>
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
		putchar(s[d]);
		d--;
	}
	putchar('\n');
}
