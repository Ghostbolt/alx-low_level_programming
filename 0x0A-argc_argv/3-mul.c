#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: arguments
 * @argv: arr of argc
 * Return: null
 */
int main(int argc, char *argv[])
{
	int i = 0;
	char c[] = "Error";
	if (argc < 3 || argc > 3)
	{
		printf("%s\n", c);
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", i);
	}

	return (0);
}
