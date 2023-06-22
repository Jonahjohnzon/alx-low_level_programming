#include "main.h"
/**
 * print_line - Print line
 * Description: 'Print line according to input'
 * @n: Input
 * Return: void
 */
void print_line(int n)
{
	int first;

	if (n != 0 && n > 0)
	{
	for (first = 1; first <= n; first++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}
