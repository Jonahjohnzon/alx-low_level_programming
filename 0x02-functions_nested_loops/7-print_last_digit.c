#include "main.h"
/**
 * print_last_digit - Check case
 * @c: Character to be checked
 * Description: 'Check for case difference'
 * Return: 1 or 2
 */
int print_last_digit(int c)
{
	int digit;

	digit = n % 10;

	if (digit < 0)
	{
	digit = digit * -1;
	}

	_putchar(digit + '0');

	return (digit);
}
