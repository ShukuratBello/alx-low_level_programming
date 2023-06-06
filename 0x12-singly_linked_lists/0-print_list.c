#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - a function that prints all the prints all elements
 * of a list_t list
 * @h: pointer to head of list
 * Return: number of node in list as size_t
 */
size_t print_list(const list_t *h)
{
		int node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
