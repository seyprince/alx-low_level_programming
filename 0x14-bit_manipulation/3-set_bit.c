#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to set
 *
 * Return: 1 on success, or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1ul << index;
	return (1);
}

