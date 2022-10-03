#include "main.h"
#include <stdlib.h>

/**
 * free_grid - ...
 * @grid: ...
 * @height: ...
 *
 * Return: ...
 */
void free_grid(int **grid, int height)
{
	int abc;

	for (abc = 0; abc < height; abc++)
	{
		free(grid[abc]);
	}

	free(grid);
}
