#include "main.h"

/**
 * *_strchr - string character detective
 * @s: character carrier
 * @c: lost character
 *
 * Return: always 0 for success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (0);

}
