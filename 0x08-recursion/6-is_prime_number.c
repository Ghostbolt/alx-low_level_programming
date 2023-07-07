#include "main.h"

/**
 * _prime - returns true if n is prime
 * @n: check number
 * @i: iterate
 * Return: true if prime, false if not
 */
int _prime(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(n, i - 1));
	}
}

/**
 * is_prime_number - prime checker
 * @n: input
 * Return: true for prime
 */
int is_prime_number(int n)
{
	unsigned int i = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, i));
	}
}
