#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns the sum of all it's parameters
 * @n: number of parameters
 *
 * Return: 0 if successful. 1 otherwise.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = sum + var_arg(ap, int);

	va_end(ap);
	return (sum);
}
