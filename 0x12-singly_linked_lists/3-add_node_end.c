#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: NULL in case of failure
 * or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

		new = malloc(sizeof(list_t);
		if (new == NULL)
		return (NULL);

		new->len = nchar;
		new->next = NULL;
		temp = *head;

		if (temp == NULL)
		{
			*head = new;
		}
		else
		{
			while (temp->next != NULL)
			temp = temp->next;
			temp->next = new;
		}
		return (*head);
}
