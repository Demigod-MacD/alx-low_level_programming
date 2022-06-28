#include "main.h"

/**
 * free_grid -function for removing memory allocation
 * @grid: grid to be freed
 * @height: height of matrix
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
