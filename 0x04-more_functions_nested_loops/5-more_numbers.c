#include "main.h"
/**
 * more_numbers - prints numbers 0-14
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 14; i++)
	{
		j = i / 10;
		k = i % 10;
		if (i <= 9)
			_putchar(i + '0');
		if (i > 9)
		{
			_putchar(j + '0');
			_putchar(k + '0');
		}
	}
	_putchar('\n');
}
