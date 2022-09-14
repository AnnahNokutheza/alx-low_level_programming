#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a script followed by a new line
 *
 * Return: 0
 *
 */

int main(void)
{
	int c;

	c = getchar();
	while (c !=  EOF)
	putchar(c);
	c = getchar();

	putchar('\n');
return (0);
}

