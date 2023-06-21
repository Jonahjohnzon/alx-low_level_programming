#include "main.h"
/**
 * print_times_table - Print timestabels
 * Description: 'To print timestables from 0'
 * @n: input character
 * Return: void
 */
void print_times_table(int n)
{	int start, second, third;

	if (n <= 15 && n >= 0)
	{
	for (start = 0; start <= n; start++)
	{
		for (second = 0; second <= n; second++)
		{
		third = start * second;
		if (third > 99)
		{
		_putchar(',');
		_putchar(' ');
		_putchar((third / 100) + '0');
		_putchar(((third / 10) % 10) + '0');
		_putchar(third % 10 + '0');
		}
		else if (third > 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(((third / 10) % 10) + '0');
		_putchar(third % 10 + '0');
		}
		else
		{
		if (second != 0)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		}
		_putchar(third % 10 + '0');
		}
		}
	_putchar('\n');
	}
	}

}
