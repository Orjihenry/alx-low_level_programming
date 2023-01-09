#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously
 *		created by your alloc_grid function.
 *
 * @grid: pointer to 2-D array
 * @row: row of the array
 *
 * Return: Success 0
 */

void free_grid(int **grid, int row)
{
	int i;

	for (i = 0; i < row; i++)
		free(grid[i]);
	free(grid);
}
