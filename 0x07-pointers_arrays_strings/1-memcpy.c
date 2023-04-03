#include "main.h"

/**
 * *_memcpy - copy memory address
 *
 * @dest: stored memory address
 * @src: copied memory address
 * @n: value of bytes sum
 *
 * Return: copied memory results/outcome
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
