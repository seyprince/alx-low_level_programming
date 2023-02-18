#include <stdio.h>
/**
 * main - printing alphabets
 * Return: 0
 */
int main(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
