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
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		int j = 0;

		for (; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else if(!accept[j])
			{
				break;
			}
		}
	}
	return (i);
}
