#include <main.h>
/**
 * main - Entry point
 * prints "Holberton" followed by a new line
 * Return: 0
 */

int main (void)
{
	char school[] = "Holberton";
	int i;
	int length = strlen(school);
	for (i = 0; i < length; i++)
	{
		_putchar(school[i]);
	}

	_putchar('\n');

	return (0);
}
