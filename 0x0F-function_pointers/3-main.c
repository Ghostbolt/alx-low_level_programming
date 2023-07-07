#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int iNum1, iNum2;
	char *_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	iNum1 = atoi(argv[1]);
	_op = argv[2];
	iNum2 = atoi(argv[3]);

	if (get_op_func(_op) == NULL || _op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*_op == '/' && iNum2 == 0) ||
	    (*_op == '%' && iNum2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(_op)(iNum1, iNum2));
	return (0);
}
