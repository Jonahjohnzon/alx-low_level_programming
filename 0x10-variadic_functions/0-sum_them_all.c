#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Variadic function
 * @n: input
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list list;

	va_start(list, n);
	unsigned int count;

	int sum;

	for (count = 0; count < n; count++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sun);
}
