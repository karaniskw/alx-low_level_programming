#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -this frees 2d array
 * @grid:indicates a 2d grid
 * @height:indicates height dimension of grid
 * Description:this frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

