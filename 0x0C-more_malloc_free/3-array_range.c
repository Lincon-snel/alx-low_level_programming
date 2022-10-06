#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers starting from min to max.
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: pointer to the new array
 *         NULL if malloc fails or min > max.
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
