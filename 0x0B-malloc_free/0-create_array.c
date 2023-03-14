#include <stdlib.h>
#include "main.h"
/**
 * create_array - array of characters
 * @c: character
 * @size: size of char
 * Return: null
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

