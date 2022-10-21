#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list
 * @str: the new string to be added
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
