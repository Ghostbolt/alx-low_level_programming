#include "main.h"

/**
 * wildcmp - ze comparor
 * @s1: 1st string input
 * @s2: 2nd string input
 * Return: T or F
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	else if (*s2 == *s1)
	{
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	else
	{
		return (0);
	}
}
