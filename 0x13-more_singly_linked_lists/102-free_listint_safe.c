#include "lists.h"

/**
 * free_listint_safe - f function that frees a linked list
 * @h- A pointer
 * Return: The list of the list that was free
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;

	temp = *h;
	while (temp)
	{
		temp = *h;
		temp = temp->next;
		free_list(temp);
		counter++;
	}
	*h = NULL;

	return (counter);
}

/**
 * free_list - A function that frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
