#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contain a copy of str.
 * @str: the string
 *
 * Return: pointer to the duplicated string,
 *         or NULL if str = NULL or memory was insufficient.
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}
