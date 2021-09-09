#include "main.h"
/**
 * _strncpy - copies n bytes of string
 * @dest: string duplicate
 * @src: string to be copied
 * @n: bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	for ( ; j < n; j++)
	dest[i + j] = '\0';

	return (dest);
}
