#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: the new string to be added
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last;
	unsigned int i, len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		len++;

	newNode->str = strdup(str);
	newNode->len = len;
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
