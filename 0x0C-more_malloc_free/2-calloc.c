#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in th array
 * @size: size of each element in the array
 *
 * Return: pointer to the allocated memory,
 *         NULL if nmemb or size is 0,
 *         or NULL if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = '\0';

	return (arr);
}
