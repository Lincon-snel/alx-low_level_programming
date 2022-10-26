#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given
 * index of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded,
 *        -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int k;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (k = 0; k < (index - 1); k++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);

	return (1);
}
