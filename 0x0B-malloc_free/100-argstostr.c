#include <stdlib.h>
/**
 * argstostr - arguments
 * @ac: value
 * @av: value
 * Return: null
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	int total_length = 0;

	for (int i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	char *result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	int k = 0;

	for (int i = 0; i < ac; i++)
	{
		int j = 0;

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
