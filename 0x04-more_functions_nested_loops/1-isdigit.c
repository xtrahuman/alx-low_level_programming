#include "main.h"
/**
 * _isdigit - check if character c is a digit
 * @c: The character to check
 *
 * Return: 1 if upper and 0 if it isnt
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
