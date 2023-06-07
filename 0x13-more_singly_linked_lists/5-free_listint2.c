#include "lists.h"

/**
 * free_listint2 - a function that frees a list but head is null
 * @head: linked list and head
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *pos;

	if (head != NULL)
	{
		pos = *head;
		while ((temp = pos) != NULL)
		{
			pos = pos->next;
			free(temp);
		}
		*head = NULL;
	}
}
