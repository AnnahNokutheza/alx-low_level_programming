#include <stdio.h>
#include "variadic_functions.h"

/**
 *  print_strings - function that prints strings, followed by a new line
 *  @separator: the string to be printed between the strings
 *  @n: the number of strings passed to the function
 *
 *  Return: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int abc = 0;
char *string;

if (n > 0)
{
while (abc < n)
{
string = va_arg(args, char *);
if (string == NULL)
printf("%s", "(nil)");
else
printf("%s", string);

if (abc != n - 1 && separator != NULL)
printf("%s", separator);

abc++;
}

va_end(args);
}

printf("\n");
}
