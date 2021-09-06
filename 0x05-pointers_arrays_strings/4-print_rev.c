#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int d;

	while (s[d] != '\0')
	{
		d++;
	}
	d--
	while (d >= 0)
	{
		putchar(s[d]);
		d--;
	}
	putchar('\n');
}
