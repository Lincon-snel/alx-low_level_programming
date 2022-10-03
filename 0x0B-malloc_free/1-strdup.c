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
	int i;

	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(str));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];

	return (dup);
}
