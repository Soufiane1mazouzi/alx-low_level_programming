#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - function that frees a 2 dimensional
 * @grid: grid created by alloc_grid function.
 * @height: integer
 */
void free_grid(int **grid, int height)
{
	int i;
	int j = 0;

	for (i = 0; i < height; i++)
	{
		while (grid[i][j] != '\0')
		{
			free(grid[i]);
			j++;
		}
		if (grid[i][j] == '\0')
			free(grid[i]);
	}
	free(grid);
}
