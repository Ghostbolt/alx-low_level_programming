#include <stdio.h>
#include <stdlib.h>

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int val = 0, coins = 0;
	char c[] = "Error";

	if (argc < 2 || argc > 2)
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
