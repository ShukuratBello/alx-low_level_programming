#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: The arguments counter number
 * @argv: The argument value name
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int num, res = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		res += num;
	}
	printf("%d\n", res);
	return (0);
}
