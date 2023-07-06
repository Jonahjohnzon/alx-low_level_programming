#include "main.h"
/**
 * factorial - Recursion
 * Description: 'function that returns the factorial of a given number'
 * @n: input
 * Return: int (Success)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
