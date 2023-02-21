#include <stdio.h>
/**
 * main - combination fro 0 - 99
 * Return: 0
 */
int main(void)
{
	int f, s;

	for (f = 0; f < 100; f++)
	{
		for (s = 0; s < 100; s++)
		{
			if (f < s)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				if (f != 98 || s != 99)
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
