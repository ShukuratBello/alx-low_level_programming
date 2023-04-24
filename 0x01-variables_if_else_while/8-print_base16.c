#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print all numbers in base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hd;
	char letter;

	for (hd = '0'; hd <= '9'; hd++)
	{
		putchar(hd);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
