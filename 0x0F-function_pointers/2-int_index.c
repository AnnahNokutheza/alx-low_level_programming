#include "function_pointers.h"

/**
 * int_index - ...
 * @array: ...
 * @size: ...
 * @cmp: ...
 *
 * Return: ...
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int abc = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (abc < size)
			{
				if (cmp(array[abc]))
					return (abc);

				abc++;
			}
		}
	}

	return (-1);
}
