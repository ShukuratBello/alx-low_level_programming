#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - length of list_t struct
 * @h: pointer to the head node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (node);
}
