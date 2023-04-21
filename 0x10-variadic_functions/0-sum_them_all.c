#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - parameter sum
 * @n: parameter num
 * @...: parameter var
 * Return: n
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list _a;
	unsigned int i, iSum = 0;

	va_start(_a, n);

	for (i = 0; i < n; i++)
	{
		iSum += va_arg(_a, int);
	}
	va_end(_a);

	return (iSum);
}
