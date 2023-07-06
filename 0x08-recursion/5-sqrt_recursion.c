#include "main.h"
int count(int x, int y);

/**
 * _sqrt_recursion - Recursion
 * Description: 'function that returns the natural square root of a number'
 * @n: input
 * Return: int (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (count(n, 0));
}
/**
 * count - Recursion
 * Description: 'function that returns the natural square root of a number'
 * @x: input
 * @y: input
 * Return: int (Success)
 */
int count(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	if (y * y == x)
	{
		return (y);
	}
	return (count(x, y + 1));
}
