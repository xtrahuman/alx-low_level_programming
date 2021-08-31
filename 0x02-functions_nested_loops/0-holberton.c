#include "main.h"
/**
 * main - Entry point
 * prints "Holberton" followed by a new line
 * Return: 0
 */

int main(void)
{
	char school[] = "_putchar";
	int i = 0;

	while (school[i] != '\0')
	{
		_putchar(school[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
