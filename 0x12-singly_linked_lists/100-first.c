#include <stdio.h>

/* Using constructors in C */
void start_func(void)__attribute__((constructor));

/**
 * start_func - function that runs
 * before the main function
 *
 * Return: void
 */
void start_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
