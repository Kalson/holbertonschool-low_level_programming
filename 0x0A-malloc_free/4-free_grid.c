#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - function that concatenates two strings
 * @grid: parmater for grid
 * @height: parameter for height
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
