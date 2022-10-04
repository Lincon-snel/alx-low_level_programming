#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string,
 *         NULL if av or ac equals 0,
 *         or NULL if program fails.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, av_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			av_len++;
	}

	str = malloc(sizeof(char) * av_len + 1);

	if (str == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
