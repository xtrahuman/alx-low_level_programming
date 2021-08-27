#include <stdio.h>
/**
 * main - main block
 * this code uses putchar function to ptint the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char n;

	n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);

}
