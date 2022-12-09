#include "lists.h"

/**
 * free_dlistint - function frees a linked dlistint_t list.
 * @head: the head of the dlistint_t list
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
