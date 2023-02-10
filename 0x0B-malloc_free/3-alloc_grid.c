#include "main.h"

/**
 * alloc_grid - osdfj
 * @width: lsdkjf
 * @height: lsdkjf
 *
 * Return: lskdjfkladfk
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	ptr = malloc(width * sizeof(*ptr));
	for (i = 0; i < width; i++)
		ptr[i] = malloc(height * sizeof(ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
