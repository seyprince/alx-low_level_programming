#include "main.h"

int check_pal(char *s, int x, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - will check if a string is a palindrome
 * @s: The string to reverse
 *
 * Return: 1 if it's a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - will return the lenght of a string
 * @s: The string whose lenth will be calculated
 *
 * Return: lenth of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - will check the characters recursively for the palindrome
 * @s: The string
 * @x: The iterator
 * @len: Length of the string
 *
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int check_pal(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (check_pal(s, x + 1, len - 1));
}
