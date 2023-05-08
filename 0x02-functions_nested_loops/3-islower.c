#include "main.h"

/**
 * _islower - Entry Point
 * Description: A function that checks for lowercase character
 * Return: 1 if true. 0 if false.
 */

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
