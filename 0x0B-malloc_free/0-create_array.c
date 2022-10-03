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
	char *arr;
	unsigned int i;

	arr = malloc(size);
	for (i = 0; i < size; i++)
		arr[i] = c;

	if (size == 0 || arr == NULL)
		return (NULL);
	else
		return (arr);
	free(arr);
}
