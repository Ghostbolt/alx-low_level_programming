#include "main.h"

/**
 * _strlen_recursion - string length detective
 * @s: string
 * Return: length in ints
 */
int _strlen_recursion(char *s)
{
	unsigned int ilen = 0;

	if (*s != '\0')
	{
		ilen++;
		ilen += _strlen_recursion(s + 1);
	}

	return (ilen);
}
