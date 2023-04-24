#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print chars 0-9 followed by a new line.
 * Return: Always 0 Success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

	}
	putchar('\n');

	return (0);
}
