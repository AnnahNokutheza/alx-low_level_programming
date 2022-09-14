#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Prints a script followed by a new line
 *
 * Return: Always success
 *
 */

int main(void)
{
	int c;

	c = getchar();
	while (c !=  EOF)
	_putchar(c);
	c = getchar();

	_putchar('\n');
return (0);
}

