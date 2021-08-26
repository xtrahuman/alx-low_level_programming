#include<stdio.h>
/**
 * main - Entry point
 * it prints out sizes of different types
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long lo\
ng int));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
