#include "main.h"
/**
 * _memset - memory
 * @s: starting
 * @b: byte
 * @n: size
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
