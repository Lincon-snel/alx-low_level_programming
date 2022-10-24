#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 * linked list_t list.
 * @h: pointer the head of the list
 *
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
