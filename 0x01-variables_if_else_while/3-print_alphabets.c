#include <stdio.h>
/**
 * main - main block
 * this code uses putchar function to print the alphabet in lowercase
 * and then upper case
 * Return: 0
 */
int main(void)
{
	char n;

	n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	n = 'A';

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);

}
