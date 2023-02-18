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
	return (0);
}
