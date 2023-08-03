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

	int top = 0;

	int power = 0;

	if (b == NULL)
	{
	return (0);
	}
	while (b[top] != '\0')
	{
	top++;
	}
	for (count = top - 1; count >= 0; count--)
	{

		if (b[count] != '0' && b[count] != '1')
		{
		return (0);
		}

		if (b[count] == '1')
		{
		amount += 1 * (_pow_recursion(2, power));
		}
	power++;

	}
	return (amount);
}
