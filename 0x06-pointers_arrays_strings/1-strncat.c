#include "main.h"
/**
 * _strncat - concantenates two stings
 * @dest: string to be appended
 * @src: string to be append
 * @n: bytes to be copied
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
