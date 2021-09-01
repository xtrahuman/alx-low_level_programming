#include "main.h"
/**
 * times_table - Print the 9 times table, starting from 0
 */
void times_table(void)
{
	int n, j, k, l, m;

	for (n = 0; n < 10; n++)
	{
		for (j = 0; j < 10; j++)
		{
			k = n * j;
			if (k < 10 && j != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			if (k < 10)
				_putchar('0' + k);


			if (k > 9)
			{
				l = k / 10;
				m = k % 10;

				_putchar(44);
				_putchar(32);
				_putchar('0' + l);
				_putchar('0' + m);
			}

		}
		_putchar('\n');
	}
}
