#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints program name, followed by a new line
 * @argc: command line argument count
 * @argv: argument value,and a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
