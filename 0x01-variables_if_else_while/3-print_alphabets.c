#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercasee, then in uppercase.
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
