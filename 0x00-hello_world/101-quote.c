#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry
 * Return: 1
 */
int main(void)
{
int st = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n\
");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", st);
return (1);
}
