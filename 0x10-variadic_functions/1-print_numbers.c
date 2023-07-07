#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string
 * @n: integer num
 * @...: printed nums
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int idx;

	va_start(nums, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(nums, int));

		if (idx != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(nums);
}
