#include <stdio.h>
/**
 * main - main block
 * this code uses putchar function to print
 * possible combinations of double digit numbers
 * numbers must be seperate by , and a space
 * Numbers should be printed in ascending order
 * print only smallest combination of two digits
 * You can only use putchar five times maximum in your code
 * starting from 0
 * Return: 0
 */
int main(void)
{
	int n;
	int j;
	int k;

	n = 0;

	while (n < 100)
	{
		j = n / 10;
		k = n % 10;
		if (j < k)
		{
			putchar(j + '0');
			putchar(k + '0');
			if (n < 99)
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
