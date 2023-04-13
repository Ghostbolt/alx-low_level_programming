#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: bytes
 * Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pr;

	pr = malloc(b);
	if (pr == NULL)
	{
		exit(98);
	}
	return (pr);
}
