#include <stdio.h>

/**
 * main - Prints a script followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int c;

	c = getchar();
	while (c !=  EOF)
	putchar(c);
	c = getchar();
	print_putchar();

	putchar('\n');
return (0);
}

