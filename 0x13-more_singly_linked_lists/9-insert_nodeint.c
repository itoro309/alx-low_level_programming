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
	listint_t *new_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int i = 0;

	new_node->n = n;
	new_node->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new_node->next = *head;
				*head = new_node;
					return (new_node);
			}
			new_node->next = previous_node->next;
			previous_node->next = *head;
			head = &((*head)->next);
			i++;

		}
		return (NULL);
}

/**
 * listint_len - counts the number of node in a linked list
 * @h: head of the list
 *
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{ const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
}
