#include <stdlib.h>
/**
 * free_grid - main
 * @grid: grid
 * @height: value
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
