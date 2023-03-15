#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DELIMITER ' '
/**
 * strtow - main split function
 * Return: 0
 */
char **strtow(char *str)
{
	char **words;
	int i, j, len, word_count = 0;
	
	if (str == NULL || *str == '\0')
		return NULL;
	
	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;
	for (i = 0; i < len; i++)
	{
		if (str[i] != DELIMITER && (i == 0 || str[i - 1] == DELIMITER))
		{
			word_count++;
			for (j = i; j < len; j++)
			{
				if (str[j] == DELIMITER)
				{
					words[word_count - 1] = malloc((j - i + 1) * sizeof(char));
					if (words[word_count - 1] == NULL)
					{
						/* Free all previously allocated memory and return NULL */
						for (j = 0; j < word_count - 1; j++)
							free(words[j]);
						free(words);
						return NULL;
					}
					strncpy(words[word_count - 1], str + i, j - i);
					words[word_count - 1][j - i] = '\0';
					break;
				}
				if (j == len - 1)
				{
					words[word_count - 1] = malloc((j - i + 2) * sizeof(char));
					if (words[word_count - 1] == NULL)
					{
						/* Free all previously allocated memory and return NULL */
						for (j = 0; j < word_count - 1; j++)
							free(words[j]);
						free(words);
						return NULL;
					}
					strncpy(words[word_count - 1], str + i, j - i + 1);
					words[word_count - 1][j - i + 1] = '\0';
				}
			}
		}
	}
	words[word_count] = NULL;
	return words;
}
