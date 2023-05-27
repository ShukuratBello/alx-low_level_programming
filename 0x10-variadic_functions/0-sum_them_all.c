#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all parameters
 * @n: number of parameters
 * @...: Other parameters
 * Return: the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
