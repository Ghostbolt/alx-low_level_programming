#include <stdio.h>

/*
 * main - program name
 * @argc: arguemnts
 * @argv: arrays of args
 * Return: null
 */
int main(int argc, char *argv[])
{
	int i = 0;
	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return(0);
}
