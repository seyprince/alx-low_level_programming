#include "main.h"
/**
 * _isalpha - to check alphabetic characters
 * @c: the character
 * Return: 1 for alphabet 0 for other
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && <= 122))
	{
		return (1);
	}
	return (0);
}
