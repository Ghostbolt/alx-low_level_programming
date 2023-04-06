#include "main.h"

/**
 * alpha_sqrt - drops for the main sqrt
 * @n: num input
 * @i: recurser
 * Return: int
 */
int alpha_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (alpha_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - retursn sqrt of n
 * @n: num input
 * Return: srd n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (alpha_sqrt(n, 0));
	}
}
