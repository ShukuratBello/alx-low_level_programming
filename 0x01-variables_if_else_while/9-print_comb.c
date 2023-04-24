#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Desription: prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sdn;

	for (sdn = '0'; sdn <= '9'; sdn++)
	{
		putchar(sdn);
		if (sdn != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
