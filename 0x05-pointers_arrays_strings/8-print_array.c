#include "main.h"
/**
 * print_array - pointers and string
 * Description: 'prints a string, followed by a new line, to stdout'
 * @a: String
 * @n: number to print
 * Return: void
 */
void print_array(int *a, int n)
{	int i;

	for (i = 0; i < n; i++)
	{
	_putchar((*(a + i)) + '0');
	}
	_putchar('\n');
}
