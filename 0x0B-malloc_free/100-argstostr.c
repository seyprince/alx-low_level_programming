#include <stdlib.h>
/**
 * argstostr - arguments
 * @ac: value
 * @av: value
 * Return: null
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;

	int i, j, k;

	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	result = malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[k] = av[i][j];
			j++;
			k++;
		}
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';
	return (result);
}

