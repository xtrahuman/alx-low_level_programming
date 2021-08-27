#include <stdio.h>
/**
 * main - main block
 * this code uses putchar function to print
 * possible combinations of single digit numbers
 * numbers must be seperate by , and a space
 * Numbers should be printed in ascending order
 * You can only use putchar four times maximum in your code
 * starting from 0
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}

	putchar('\n');

	return (0);

}
