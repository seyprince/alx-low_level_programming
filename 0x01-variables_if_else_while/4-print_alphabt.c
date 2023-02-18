#include <stdio.h>
/**
 * main - print some alphabets
 * Return: 0
 */
int main(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		if ((al != 'q' && al != 'e') && al <= 'z')
			putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
