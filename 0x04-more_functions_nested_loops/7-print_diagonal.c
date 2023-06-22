#include "main.h"
/**
 * print_diagonal - Print line
 * Description: 'Print line according to input'
 * @n: Input
 * Return: void
 */
void print_diagonal(int n)
{
	int first;

	int space;

	if (n != 0 && n > 0)
	{
	for (first = 1; first <= n; first++)
	{
	for (space = 1; space <= first; space++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	if (first != n)
	{
	_putchar('\n');
	}
	}
	}
	_putchar('\n');
}
