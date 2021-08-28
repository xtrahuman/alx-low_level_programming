#include <stdio.h>
/**
 * main - main block
 * this code uses putchar function to print
 * possible combinations of double 2 digit numbers
 * numbers must be seperate by , and a space
 * Numbers should be printed in ascending order
 * You can only use putchar eight times maximum in your code
 * starting from 0
 * Return: 0
 */
int main(void)
{
	int i, j, k, l, m, n;


	for (i = 0; i < 100 ; i++)
	{
		j = i / 10;
		k = i % 10;

		for (l = 0 ; l < 100; l++)
		{
			m = l / 10;
			n = l % 10;
			if (j < m || (j == m && k < n))
			{
				putchar(j + '0');
				putchar(k + '0');
				putchar(32);
				putchar(m + '0');
				putchar(n + '0');

				if (!(j == 9 && k == 8))
					putchar(44);
				putchar(32);
			}


		}


	}

	putchar('\n');
	return (0);

}
