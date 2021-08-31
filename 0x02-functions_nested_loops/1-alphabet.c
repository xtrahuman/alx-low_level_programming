#include "holberton.h"
/**
 * print_alphabet - print alphabet a-z afer looping
 * main - calls print_alphabet function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{

	int i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}



int main(void)
{
	print_alphabet();
	return (0);
}
