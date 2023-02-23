#include "main.h"
/**
 * print_times_table - times table
 * starting with 0
 * @n: value to be printed
 */
void print_times_table(int n)
{
	int numb, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (numb = 0; numb <= n; numb++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = numb * mult;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
