#include <stdio.h>
#include <stdlib.h>

/**
 * main - coins to make change for money.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: 0 for success and 1 for unsuccesful
 **/

int main(int argc, char *argv[])
{
	int val = 0, coins = 0;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	val = atoi(argv[1]);

	while (val >= 25)
	{
		val -= 25;
		coins++;
	}

	while (val >= 10)
	{
		val -= 10;
		coins++;
	}

	while (val >= 5)
	{
		val -= 5;
		coins++;
	}

	while (val >= 2)
	{
		val -= 2;
		coins++;
	}

	if (val == 1)
	{
		coins++;
	}
	printf("%d\n", coins);

	return (0);
}
