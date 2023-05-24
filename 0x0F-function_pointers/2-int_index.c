#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns the index of the firt element for which
 * the cmp function does not return 0
 * @array: pointer to array elements
 * @size: number of elements in an array
 * @cmp: a pointer to the function to be used to compare values
 * Return: return -1 if no element matches or when size is < 0
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int idx = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for ( ; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
			return (idx);
	}
	if (i == size)
		return (-1);

	return (-1);
}
