#include "main.h"
/**
 * more_numbers - Print numbers
 * Description: 'Print 1 - 14 10 times'
 * Return: void
 */
void more_numbers(void)
{
	int start;

	for (start = 0; start < 10; start++)
	{
	int number;

	for (number = 0; number <= 14; number++)
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
