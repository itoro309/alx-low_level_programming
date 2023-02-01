#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL ; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = h->next;
		h->next = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
