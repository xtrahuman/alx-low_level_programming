#include "main.h"
/**
 * more_numbers - prints numbers 0-14
 */
void more_numbers(void)
{
	int n, i, j, k;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{

			if (i > 9)
			{
				j = i / 10;
				k = i % 10;
				_putchar(j + '0');
				_putchar(k + '0');
			}
		}

		_putchar('\n');
	}
}
