#include "main.h"
/**
 * _abs - finds the absolute value
 * @c: the number computed
 * Return: absolute number / 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
