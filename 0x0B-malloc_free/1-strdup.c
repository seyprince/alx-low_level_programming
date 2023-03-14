#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return pointers
 * @str: string
 * Return: new string
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc((strlen(str) + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}

