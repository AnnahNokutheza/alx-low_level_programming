#include "main.h"

/**
 * print_square - Prints n squares according n number of times
 * @size: The number of squares/number of times
 *
 * Return: empty
 */
void print_diagonal(int n)
{
int x, y;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(32);
}

_putchar(92);
_putchar('\n');
}
}
}
