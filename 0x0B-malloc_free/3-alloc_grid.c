#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int m, n, o, p;
	int **b;

	if (width == -1 || height == -1)
	return (NULL);

	b = malloc(sizeof(int *) * height);
	if (b == NULL)
	{
	free(b);
	return (NULL);
	}
	for (m = 0; m < height; m++)
	{
	b[m] = malloc(sizeof(int) * width);

	if (b[m] == NULL)
	{
	for (n = m; n >= 0; n--)
	{
	free(b[n]);
	}
	free(b);
	return (NULL);
	}
	}
	for (o = 0; o < height; o++)
	{
	for (p = 0; p < width; p++)
	{
	b[o][p] = 0;
	}
	}
	return (b);
}
