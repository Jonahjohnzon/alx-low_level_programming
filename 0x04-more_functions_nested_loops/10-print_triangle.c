#include "main.h"
/**
 * print_square - Print square
 * Description: 'Print box according to input'
 * @n: Input
 * Return: void
 */
void print_square(int n)
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
