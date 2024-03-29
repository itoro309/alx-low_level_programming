#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t list.
 * @head: A pointer to the address of the head
 *
 * Return: A pointr to the first node of the address
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
