#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: value of the first integer to be swapped
 * @b: value of the second integer to be swapped
 * Return: noting
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
