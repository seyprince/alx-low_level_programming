#include "main.h"
/**
 * _puts - printing a string
 * @str - string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		puts(*str);
	}
	puts('\n');
}
