#include "main.h"
/**
 * _puts - printing a string
 * @str: - string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
