#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of
 * base 10 fro 0
 * Return: Always 0 Success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}
