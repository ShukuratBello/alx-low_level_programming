#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints all arguements it receives
 * @argc: The argument counter number
 * @argv: The argument value name
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
