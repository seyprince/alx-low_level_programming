#include <stdio.h>
/**
 * main - lower case letters in reverse
 * Return: 0
 */
int main(void)
{
	char al;

	al = 'z';
	while ('z' >= 'a')
	{
		putchar(al);
		al--;
	}
	putchar('\n');
	return (0);
}
