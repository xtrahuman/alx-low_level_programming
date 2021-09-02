#include "main.h"
/**
 * _isupper - check if character c is upper case
 * @c: The character to check
 *
 * Return: 1 if upper and 0 if it isnt
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
