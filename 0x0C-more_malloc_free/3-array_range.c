#include "main.h"
#include <stdlib.h>

/**
 *  array_range - ...
 *  @min: ...
 *  @max: ...
 *
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *ptr, h = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[h] = min;
		h++;
		min++;
	}

	return (ptr);
}
