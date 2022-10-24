#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the list
 * @n: the new integer to be added
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *last;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = newNode;
	}

	return (newNode);
}
