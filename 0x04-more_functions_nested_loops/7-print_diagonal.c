#include "main.h"
/**
 * print_diagonal - prints diagonal lines
 * @n: number of time '\' should be printed
 */

void print_diagonal(int n)
{
	int c, i, d;

	c = 0;

	while (n > 0)
	{
		i = c;

		while (i > 0)
		{
			_putchar(32);
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		c++;
	}
	if (c < 1)
		_putchar('\n');
}
