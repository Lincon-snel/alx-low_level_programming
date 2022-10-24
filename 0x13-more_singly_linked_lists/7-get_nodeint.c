#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node to be returned
 *
 * Return: the node pointed to,
 *        or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;

	while (head != NULL)
	{
		if (k == index)
			return (head);

		head = head->next;

		k++;
	}

	return (NULL);
}
