#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main Entry
 *Gets the last digit of a random number and
 *prints "and is greater than 5" if its greater than 5,
 *"and is zero" if it equals 0 then prints
 *"and is less than 6 and not 0" if its less than 6 and not 0
 *Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, ld);
	}
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ld);
	return (0);
}
