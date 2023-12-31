#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line.
 * @separator: separator string
 * @n: number of arguments
 *
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *s;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);
		if  (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}


