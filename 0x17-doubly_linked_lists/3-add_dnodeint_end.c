#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the dlistint_t list.
 * @n: The integer to be added.
 *
 * Return: the address of the new node or
 *        NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = new;
		return (new);
	}
	last = *head;
	while (lastNode->next != NULL)
		last = lastNode->next;
	lastNode->next = new;
	newNode->prev = last;

	return (newNode);
}
