#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to prints
 * @f: Pointer to function
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *));
{
	char *first_name[5];
	char *last_name[5];

	printf("Enter the first name\n");
	scanf("%s", &first_name);
	printf("Enter the last name\n");
	scanf("%s", &last_name);
	printf("The name of the person is %s", first_name, last_name);

	return (0);
}
