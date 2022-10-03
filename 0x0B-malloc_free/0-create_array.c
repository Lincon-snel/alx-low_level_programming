#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the variable char
 * @c: the first character for initialization
 *
 * Return: pointer to the array,
 * or NULL if program fails or size equals 0.
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(size);
	str[0] = c;

	if (size == 0 || str == NULL)
		return (NULL);
	else
		return (str);
	free(str);
}
