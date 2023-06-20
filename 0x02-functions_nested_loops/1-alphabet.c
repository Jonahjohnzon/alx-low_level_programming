#include "main.h"
/**
 * print_alphabet - Print
 * Description: 'Print alphabet'
 * Return: void
 */
void print_alphabet(void)
{	char start;

	char finish = 'z';

	for (start = 'a'; start <= finish; start++)
	{
	_putchar(start);
	}
	_putchar('\n');
}
