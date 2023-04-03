#include "main.h"

/**
 * *_strspn - gets length of string
 * @s: input to analyze
 * @accept: input to compare
 *
 * Return: S in accepts value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}

			else if (accept[i + 1] == '\0')
			{
				return (j);
			}
		}
	}
	return (j);
}
