#include "function_pointers.h"

/**
 * array_iterator - ...
 * @array: ...
 * @size: ...
 * @action: ...
 *
 * Return: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int abc = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (abc < size)
		{
			action(array[abc]);
			abc++;
		}
	}
}
