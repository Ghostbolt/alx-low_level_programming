#include "main.h"

/**
 * _puts_recursion - prints strings
 * @s: string to be printed
 * Return: voided, none
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
