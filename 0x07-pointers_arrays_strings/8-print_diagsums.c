#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - displays diagum
 * @a: input
 * @size: matrix limiter
 * Return: voided, none
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int isum1 = 0, isum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			isum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			isum2 += *(a + i);
	}

	printf("%d, %d\n", isum1, isum2);
}
