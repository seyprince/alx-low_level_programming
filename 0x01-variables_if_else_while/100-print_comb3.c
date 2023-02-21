#include <stdio.h>
/**
 * main - printing double number combinations
 * Return: 0
 */
int main(void)
{
	int f, s;

	for (f = 0; f < 10; f++)
	{
		for (s = 0; s < 10; s++)
		{
			if (f * 10 + s < s * 10 + f)
			{
			putchar(f + '0');
			putchar(s + '0');
			if (f * 10 + s != 89)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}



