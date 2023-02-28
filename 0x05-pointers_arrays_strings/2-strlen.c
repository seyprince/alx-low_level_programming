#include <stdio.h>
/**
 * _strlen - prints lenght
 * @s: string length
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
