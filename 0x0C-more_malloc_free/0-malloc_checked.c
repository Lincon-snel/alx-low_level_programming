#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of the memory to be allocated
 *
 * Return: nothing.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *k;

	k = malloc(b);

	if (k == NULL)
		exit(98);
	else
		return (k);
}
