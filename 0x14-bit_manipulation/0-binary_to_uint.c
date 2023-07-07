#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: string
 * Return: conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int iNum = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		iNum = 2 * iNum + (b[i] - '0');
	}
	return (iNum);
}
