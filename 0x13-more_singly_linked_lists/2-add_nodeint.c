#include "lists.h"

/**
 * add_nodeint - adds a  new node at the beginning
 * *of a listint_t list
 * @head: pointer to the address of the head of the listint_t list
 * @n: the integer for the new node to contain
 *
 * Return: NULL if function
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;

	return (new);
}
