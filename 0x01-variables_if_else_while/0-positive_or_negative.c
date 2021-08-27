#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main Entry
 *Gets a random number and prints "is positive" if its greater than 0,"is zero"
 *if it equals 0 then prints "is negative" if its less than 0
 *Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
		printf("%i is zero", n);
	return (0);
}
