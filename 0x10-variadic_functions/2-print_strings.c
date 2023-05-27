#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - printsstrings followed by a new line
 * @separator: seperators
 * @n: number of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;
	char *ptr;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (j < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n"); }
