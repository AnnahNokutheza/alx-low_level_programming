#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: Always success
 */
void print_alphabet_x10(void)
{

char c, i;

for  (i = 0; i <= 9; i++, '\n')

for (c = 'a'; c <= 'z'; c++, '\n')

_putchar(c);

i++;
c++;

_putchar('\n');

}
