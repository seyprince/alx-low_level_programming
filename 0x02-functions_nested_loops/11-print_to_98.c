#include "main.h"
/**
 * print_to_98 - print natural numbers to 98
 * @n: number to start from
 * REturn: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf('\n');
				break;
			}
			else
			{
				printf("%d ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf('\n');
				break;
			}
			else
			{
				printf("%d ", n);
			}
		}
	}

}
