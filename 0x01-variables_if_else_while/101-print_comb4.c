#include <stdio.h>
/**
 * main - main block
 * this code uses putchar function to print
 * possible combinations of triple digit numbers
 * numbers must be seperate by , and a space
 * Numbers should be printed in ascending order
 * print only smallest combination of three digits
 * You can only use putchar six times maximum in your code
 * starting from 0
 * Return: 0
 */
int main(void)
{
	int n;
	int j;
	int k;
	int l;

	n = 0;

	while (n < 1000)
	{
		j = n / 100;
		k = (n / 10) % 10;
		l = n % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (n < 789)
			{
				putchar(44);
				putchar(32);
			}
		}
		n++;
	}

	putchar('\n');

	return (0);

}
