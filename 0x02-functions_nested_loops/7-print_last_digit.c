#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n:calls integer from main
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	char last = n % 10;

	_putchar(last + '0');
	return (last);
}
