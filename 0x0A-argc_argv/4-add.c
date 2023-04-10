#include <stdio.h>
#include <stdlib.h>

/**
 * main - addition
 * @argc: arguments
 * @argv: arr of argc
 * Return: null
 **/
int main(int argc, char *argv[])
{
	int i, iSum = 0, iRes = 0;
	char c[] = "Error";
	char *_letter;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			_letter = argv[i];
			while (*_letter != 0)
			{
				if (*_letter < 47 || *_letter > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				_letter++;
			}
			iRes = atoi(argv[i]);
			iSum += iRes;
		}
		printf("%d\n", iSum);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);

}
