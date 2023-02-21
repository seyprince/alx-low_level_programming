#include <stdio.h>
/**
 * main - a combination of three digits
 * Return: 0
 */
int main(void)
{
	int f, s, t;

	for (f = 0 ; f < 10 ; f++)
	{
		for (s = 0 ; s < 10 ; s++)
		{
			for (t = 0 ; t < 10 ; t++)
				if (!(t == s || s == f || s > t || f > s))
				{
					putchar(f + '0');
					putchar(s + '0');
					putchar(t + '0');
					if (!(t == 9 && s == 8 && f == 7))
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
