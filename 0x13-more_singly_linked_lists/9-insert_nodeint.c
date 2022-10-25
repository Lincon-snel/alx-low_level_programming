#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the linked list
 * @idx: the index of the list where the new node should be added
 * @n: the data (n) of the new node
 *
 * Return: the address of the new node,
 *      or NULL if it failed or
 *              if it is not possible to add the new node at index idx.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prevNode, *newNode;
	unsigned int k;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		newNode->n = n;
		return (newNode);
	}

	if (idx == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;

		return (newNode);
	}

	prevNode = *head;
	while (k < idx)
	{
		prevNode = prevNode->next;
		k++;
	}

	newNode->n = n;
	newNode->next = prevNode->next;
	prevNode->next = newNode;

	return (newNode);
}
