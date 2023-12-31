#include "main.h"
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
