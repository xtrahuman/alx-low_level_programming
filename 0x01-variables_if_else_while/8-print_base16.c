#include <stdio.h>
/**
 * main - main block
 * this code uses putchar function to print hexadecimal numbers.
 * Return: 0
 */
int main(void)
{
	int n;
	char c;

	c = 'a';
	n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (c < 'g')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);

}
