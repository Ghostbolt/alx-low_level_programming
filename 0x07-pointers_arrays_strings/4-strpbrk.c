#include "main.h"

/**
 * _strpbrk - string searcher
 * @s: input
 * @accept: input comparer
 *
 * Return: outcome displayer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else if (accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
