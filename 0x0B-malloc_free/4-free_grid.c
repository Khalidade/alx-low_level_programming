#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a 2 dimensional grid previously created with malloc
 * @grid: double pointer to the 2d array to be freed
 * @height: number of rows on the 2d array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
