#include "main.h"
/**
 * print_triangle - Print triangle
 * Description: 'Print according to input'
 * @n: Input
 * Return: void
 */
void print_triangle(int n)
{
	int first;

	int space;

	if (n != 0 && n > 0)
	{
	for (first = 1; first <= n; first++)
	{
	for (space = 1; space <= n - first; space++)
	{
	_putchar(' ');
	}
	for (space = 1; space <= first; space++)
	{
	_putchar('#');
	}
	if (space != first && first != n)
	{
	_putchar('\n');
	}
	}
	}
	_putchar('\n');
}
