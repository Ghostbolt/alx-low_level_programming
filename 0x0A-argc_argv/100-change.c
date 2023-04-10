#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum n of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int iNum, i, iRes;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	iNum = atoi(argv[1]);
	iRes = 0;

	if (iNum < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && iNum >= 0; i++)
	{
		while (iNum >= coins[i])
		{
			iRes++;
			iNum -= coins[i];
		}
	}
	printf("%d\n", iRes);
	return (0);
}
