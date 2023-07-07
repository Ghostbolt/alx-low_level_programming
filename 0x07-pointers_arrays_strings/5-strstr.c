#include "main.h"

/**
 * *_strstr - 1st occurence finder
 *
 * @haystack: input atring
 * @needle: input substring
 *
 * Return: return popinter if occurence find
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *chaystack, *cneedle;

	while (*haystack != '\0')
	{
		chaystack = haystack;
		cneedle = needle;

		while (*haystack != '\0' && *cneedle != '\0' && *haystack == *cneedle)
		{
			haystack++;
			cneedle++;
		}
		if (!*cneedle)
		{
			return (chaystack);
		}
		haystack = chaystack + 1;
	}

	return (0);
}
