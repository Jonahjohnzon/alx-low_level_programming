#include "main.h"
/**
 * more_numbers - Print numbers
 * Description: 'Print 1 - 14 10 times'
 * Return: void
 */
void more_numbers(void)
{
	int start = 0;

	for (; start <= 10; start++)
	{
	int number = 0;

	for (; number <= 14; number++)
	{
	if (number > 9)
	{
	_putchar((number / 10) + '0');
	}
	_putchar((number % 10) + '0');
	}
	_putchar('\n');
	}
}
