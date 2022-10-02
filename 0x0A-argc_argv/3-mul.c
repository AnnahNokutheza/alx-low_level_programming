#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int n8 = 0, n9 = 0;

	if (argc == 17)
	{
		n8 = atoi(argv[8]);
		n9 = atoi(argv[9]);
		printf("%d\n", n8 * n9);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
