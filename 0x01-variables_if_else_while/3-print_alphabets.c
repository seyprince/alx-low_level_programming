#include <stdio.h>
/**
 * main - print alphabets in lower and upper case
 * Return: 0
 */
int main(void)
{
	char all;

	char AL;

	all = 'a';
	AL = 'A';
	while (all <= 'z')
	{
		putchar(all);
		all++;
	}
	while (AL <= 'Z')
	{
		putchar(AL);
		AL++;
	}
	putchar('\n');
	return (0);
}
