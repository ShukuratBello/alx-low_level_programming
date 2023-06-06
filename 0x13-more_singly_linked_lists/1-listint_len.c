#include "lists.h"

/**
 * listint_len -A function that prints length of linked list
 * @h: struct to go through
 * Return: amount of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
