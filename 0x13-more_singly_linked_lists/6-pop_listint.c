#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the head of the listint_t linked list
 *
 * Return: the head node’s data (n)
 *       or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num;

	if (*head == NULL)
		return (0);

	num = (*head)->n;

	if (temp != NULL)
	{
		*head = temp->next;
		free(temp);
	}

	return (num);
}
