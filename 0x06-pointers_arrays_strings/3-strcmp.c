#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: difference between the two string
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
	}
	return (0);
}
