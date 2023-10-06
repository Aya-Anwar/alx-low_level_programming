#include "main.h"

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 *
 * @width: Width/rows of the 2D array
 *
 * @height: Height/columns of the 2D array
 *
 * Return: Pointer to a 2 dimenstional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
