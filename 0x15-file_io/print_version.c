#include "main.h"
/**
 * print_version - prints version
 * @ptr: magic.
 * Return: no return.
 */
void print_version(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
