#include "main.h"
/**
 * print_most_number - Print number
 * Description: 'Print fron 0 - 9 except 2 and 4'
 * Return: Result
 */
void print_most_number(void)
{	int n = 0;

	do {
	if (n != 2 || n != 4)
	{
	_putchar(n + '0');
	}
	n++;
	} while (n <= 9);
	_putchar('\n');
}
