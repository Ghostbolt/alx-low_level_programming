#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: string 2nd
 * Return: new portions
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int slen1 = 0, slen2 = 0;
	int i, j, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[slen1] != '\0')
		slen1++;
	while (s2[slen2] != '\0')
		slen2++;

	size = slen1 + slen2;

	c = malloc(sizeof(char) * (size + 1));

	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < slen1; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; i < size && j < slen2; i++, j++)
	{
		c[i] = s2[j];
	}
	c[i] = '\0';

	return (c);
}
