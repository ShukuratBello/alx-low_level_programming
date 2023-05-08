#include "main.h"

/**
 * _isalpha - Entry point
 * @c: An input charcter
 * Description: A function that checks for alphabetic character.
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				return (1);
		}
	}
	return (0);
}
