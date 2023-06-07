#include "lists.h"

/**
 * free_listint - a function that frees the list
 * @head: head of struct
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(head);
	}
}