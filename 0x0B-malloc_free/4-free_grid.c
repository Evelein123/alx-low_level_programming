#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;
	/* Free each row of the grid */
	for (i = 0; i < height; i++)
		free(grid[i]);
	/* Free the grid */
	free(grid);
}
