#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of an array.
 * @c: A character to initialize the array
 * Return: A pointer to the array or NULL (0) if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ch_array;
	unsigned int i = 0;

	ch_array = malloc(sizeof(char));

	if (ch_array == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		ch_array[i] = c;
		i++;
	}
	return (ch_array);
}
