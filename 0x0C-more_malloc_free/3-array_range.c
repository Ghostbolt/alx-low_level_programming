#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, iSize;

	if (min > max)
	{
		return (NULL);
	}
	iSize = max - min + 1;

	ptr = malloc(sizeof(int) * iSize);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
