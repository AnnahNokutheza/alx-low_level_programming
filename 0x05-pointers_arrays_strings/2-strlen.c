#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: String to count
 *
 * Returns: Length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0' ; s++)
	{
		c++;
	}

	return (c);
}
