#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: array counter;
 * @argv: array list;
 *
 * Return: Always (0) Success.
 */

int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc - 1]);
	return (0);
}
