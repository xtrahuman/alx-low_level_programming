#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string
 * Return: nothing
 */
void _puts(char *str)
{
	int d;

	d = 0;
	while (str[d] != '\0')
	{
		putchar(str[d]);
		d++;
	}
	putchar('\n');
}
