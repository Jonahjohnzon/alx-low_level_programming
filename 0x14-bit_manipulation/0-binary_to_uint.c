#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Recursion
 * Description: 'function that returns the'
 * @x: input
 * @y: input
 * Return: int (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);
	}
	if (y < 0)
	{
	return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_to_uint - Convert to base 10
 * @b: base 2
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int count;

	unsigned int amount = 0;

	int count_total = sizeof(b);

	if (b == NULL)
	{
		return (0);
	}
	for (count = 0; count < count_total; count++)
	{
		if (*b != '0' || *b != '1')
		{
			return (0);
		}
		if (*b == '0')
		{
		amount += (0) * (_pow_recursion(10, count));
		}
		else if (*b == '1')
		{
		amount += 1 * (_pow_recursion(10, count));
		}
		b++;

	}
	return (amount);
}
