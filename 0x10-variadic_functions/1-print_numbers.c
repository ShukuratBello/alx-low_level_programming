#include variadic_functions.h

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be separated between numbers
 * @n: number of paremeters
 * @...: Other parameters
 * Return: The of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list ap;
	unsigned int j;
	int nums;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (j < (n - 1) && separator != NULL)
			printf("%s", separator;
	}

	va_end(ap);
	printf("\n")
}
