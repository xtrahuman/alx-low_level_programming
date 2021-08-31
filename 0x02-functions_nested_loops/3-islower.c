#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c : character parameter
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
