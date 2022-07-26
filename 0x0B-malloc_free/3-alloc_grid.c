#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of int
 * @width: width of the grid
 * @height: height of the grid
 * Return: address of the newly allocated memory
 */
int **alloc_grid(int width, int height)
{
int x, y, h, w;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
grid[x] = malloc(width * sizeof(int));
if (grid[x] == NULL)
{
for (y = 0; y < x; y++)
{
free(grid[y]);
}
free(grid);
return (NULL);
}
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
grid[h][w] = 0;
}
return (grid);
}
