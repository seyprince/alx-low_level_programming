#include "main.h"
/**
 * print_data - prints data
 * @ptr: magic.
 * Return: no return.
 */
void print_data(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}
