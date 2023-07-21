#include "variadic_functions.h"
/**
 * sum_them_all - Variadic function
 * @n: input
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;

	int sum;

	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
