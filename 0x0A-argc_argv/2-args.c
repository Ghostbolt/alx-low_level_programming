#include <stdio.h>

/**
 * main - program prints argcs accepted
 * @argc: arguemnts received
 * @argv: arrays of arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
