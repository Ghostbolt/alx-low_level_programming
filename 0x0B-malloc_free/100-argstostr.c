#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry
 * @ac: input
 * @av: array
 * Return: 0 for success
 */
char *argstostr(int ac, char **av)
{
	int i, n, j = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			l++;
		}
	}

	l += ac;

	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			s[j] = av[i][n];
			j++;
		}
		if (s[j] == '\0')
		{
			s[j++] = '\n';
		}
	}
	return (s);
}
