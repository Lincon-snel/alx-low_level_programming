#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size of the previously allocated memory
 * @new_size: size of the newly the allocated memory
 *
 * Return: pointer to the newly allocated memory,
 * pointer to the previously allocated memory if new_size == old_size,
 * or NULL if malloc fails or new_size = 0.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *dup_ptr, *box;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	dup_ptr = ptr;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	box = new_ptr;

	for (i = 0; i < old_size || i < new_size; i++)
		box[i] = *dup_ptr++;

	free(ptr);
	return (new_ptr);
}
