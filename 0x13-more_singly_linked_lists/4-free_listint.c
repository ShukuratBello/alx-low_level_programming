#include "lists.h"

/**
 * free_listint - a function that frees the list
 * @head: head of struct
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head != NULL)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}
}
