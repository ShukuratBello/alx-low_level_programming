#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print lowercase alphabet in  reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
