#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated grid or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for the grid */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	/* Allocate memory for each row and initialize elements to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if allocation fails */
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
