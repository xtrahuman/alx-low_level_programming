#include <stdio.h>
/**
 * main - main block
 * this code uses putchar function to print single digit numbers in base 10
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
		n++;
	}

	putchar('\n');

	return (0);

}
