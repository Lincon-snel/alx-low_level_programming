#include "lists.h"

/**
 * list_len - function that returns the number of elements in a
 * linked list_t list.
 * @h: pointer the head of the list
 *
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	unsigned long i = 0;

	while (h != NULL)
	{
		i++;

		h = h->next;
	}

	return (i);
}
