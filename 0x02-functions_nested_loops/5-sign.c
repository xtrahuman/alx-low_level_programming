#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The sign to print
 *
 * Return: 1 if positive, 0 if zero and -1 if its a negative number.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
