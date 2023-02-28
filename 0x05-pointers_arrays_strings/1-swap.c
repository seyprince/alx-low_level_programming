#include <stdio.h>
/**
 * swap_int - swap numbers
 * @a: number 1
 * @b: number 2
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int z = *a;

	*a = *b;

	*b = z;
}
