#include "main.h"
#include <ctype.h>
/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i, j;

	char p[] = "AEOTL";
	char k[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	for (j = 0; p[j] != '\0'; j++)
	{
		if (toupper(s[i]) == p[j])
			s[i] = k[j];
	}
	return (s);
}
