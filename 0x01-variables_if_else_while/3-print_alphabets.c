#include <stdio.h>
/**
 * main - print alphabets in lower and upper case
 * Return: 0
 */
int main(void)
{
	char al;

	char AL;

	al = 'a';
	AL = 'A';
	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	while (AL <= 'Z')
	{
		putchar(AL);
		AL++;
	}
	putchar('\n');
	return (0);
}
