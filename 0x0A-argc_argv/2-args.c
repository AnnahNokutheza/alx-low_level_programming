#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the args conten
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int abc;

	for (abc = 0; abc < argc; abc++)
	{
		printf("%s\n", argv[abc]);
	}

		return (0);
}
