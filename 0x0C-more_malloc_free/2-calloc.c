#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 *
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int h = 0, g = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	g = nmemb * size;
	ptr = malloc(g);

	if (ptr == NULL)
		return (NULL);

	while (h < g)
	{
		ptr[h] = 0;
		h++;
	}

	return (ptr);
}
