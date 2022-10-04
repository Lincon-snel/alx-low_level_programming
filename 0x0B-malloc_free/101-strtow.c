#include "main.h"
#include <stdlib.h>

/**
 * **strtow - splits a string into words
 * @str: the string
 *
 * Return: pointer to an array of strings (words),
 *         NULL if str == NULL or str == "",
 *         or NULL if function fails.
 */

char **strtow(char *str)
{
	char **arr;
	int i, j = 0, k, l, arr_len = 0, word_len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
				((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			arr_len++;
	}

	if (arr_len == 0)
		return (NULL);

	arr = malloc((arr_len + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0' && j < arr_len; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			k = i;

			while ((str[k] != ' ' || str[k] != '\t') && str[k] != '\0')
			{
				word_len++;
				k++;
			}

			arr[j] = malloc((word_len + 1) * sizeof(char));

			if (arr[j] == NULL)
			{
				for (j = j - 1; j >= 0; j--)
					free(arr[j]);

				free(arr);

				return (NULL);
			}

			for (l = 0; l < word_len; l++, i++)
				arr[j][l] = str[i];

			arr[j++][l] = '\0';
		}
	}

	arr[j] = NULL;

	return (arr);
}
