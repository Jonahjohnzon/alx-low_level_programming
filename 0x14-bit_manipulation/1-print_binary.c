#include "main.h"

/**
 * base - loop
 * @n: input
 */
void base(unsigned long int n)
{
	int bases;

	if (n == 0)
	{
	return;
	}
	base(n / 2);
	bases = n % 2;
	_putchar(bases + '0');
}
/**
 * print_binary - print binary
 * @n: base 10
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0' + 0);
	}
	else if (n == 1)
	{
		_putchar('0' + 1);
	}
	else
	{
		base(n);
	}

}
