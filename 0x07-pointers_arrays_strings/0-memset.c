#include "main.h"

/**
 * *_memset -  fill n , use b to point s
 *
 * @s: startup point
 * @b: replacement character
 * @n: bytes to be changed
 *
 * Return: changed results/outcome
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
