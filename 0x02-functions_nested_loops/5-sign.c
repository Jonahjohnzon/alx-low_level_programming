#include "main.h"
/**
 * print_sign - Check sign
 * @n: Number to be checked
 * Description: 'Check for sign difference'
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	_putchar(n);
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	_putchar(n);
	return (-1);
	}
	else
	{
	_putchar(0);
	_putchar(n);
	return (0);
	}
}
