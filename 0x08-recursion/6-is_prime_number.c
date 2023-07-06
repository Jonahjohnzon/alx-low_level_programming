#include "main.h"
int prime(int x, int y);
/**
 * is_prime_number - Recursion
 * Description: 'function that returns int'
 * @n: input
 * Return: int (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (prime(n, n - 1));
}
/**
 * prime - Recursion
 * Description: 'function that returns prime or not'
 * @x: input
 * @y: input
 * Return: int (Success)
 */
int prime(int x, int y)
{
	if (y == 1)
	{
	return (1);
	}
	if (x % y == 0 && y > 0)
	{
	return (0);
	}
	return (prime(x, y - 1));
}
