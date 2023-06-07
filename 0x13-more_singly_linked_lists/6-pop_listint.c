#include "lists.h"

/**
 * pop_listint - a function that pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *h;
	listint_t *pos;

	if (*head == NULL)
		return (0);

	pos = *head;

	node = pos->n;

	h = pos->next;

	free(pos);

	*head = h;

	return (node);
}
