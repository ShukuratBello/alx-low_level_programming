#include "lists.h"

/**
 * get_nodeint_at_index - A function that gets a node at index
 * @head: linked list at head
 * @index: index of node to grab
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp;

	tmp = head;
	while (count != index && tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	if (count != index)
		return (NULL);
	return (tmp);
}
