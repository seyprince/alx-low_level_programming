#include "main.h"
/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	uint16_t num = 0x0001;
	uint8_t *byte_ptr = (uint8_t *)&num;

	if (*byte_ptr == 0x01)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

