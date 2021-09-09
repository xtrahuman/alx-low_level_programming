#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lower case letters of a string to uppercase
 * @b: string
 * Return: uppercase string
 */
char *string_toupper(char *b)
{
	int i = 0;

	while (b[i])
	{
		b[i] = toupper(b[i]);
		i++;
	}

	return (b);
}
