#include "main.h"
/**
 * _islower - verufy lovercase characters
 * @c: the character to be checked
 * Return: 1 for lower 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
