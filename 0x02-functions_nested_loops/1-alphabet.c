#include "main.h"
/**
 * main - calls print_alphabet function
 * _putchar - writes the character c to stdout
 * print_alphabet - print alphabet a-z afer looping
 * @ c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}



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
