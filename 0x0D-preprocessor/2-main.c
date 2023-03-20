#include <stdio.h>
/**
 * main - filename
 * Return: 0
 */
int main(void)
{
	const char *filename = __FILE__;

	while (*filename != '\0')
	{
		putchar(*filename);
		filename++;
	}
	putchar('\n');
	return (0);
}

