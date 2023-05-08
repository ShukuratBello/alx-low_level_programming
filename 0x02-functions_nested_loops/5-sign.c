#include "main.h"

/**
 * print_sign - Entry Point
 * @n: The input number is an integer
 * Description: Prints the sign of a number
 * Return: 1 for letters or 0 if not letters
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
