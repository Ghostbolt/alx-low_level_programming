#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int iBit;

	if (index > 63)
	{
		return (-1);
	}
	iBit = (n >> index) & 1;

	return (iBit);
}
