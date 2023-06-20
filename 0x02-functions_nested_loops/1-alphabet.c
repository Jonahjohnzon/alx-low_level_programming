#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: 'Print alphabet'
 * Return: Always 0 (Success)
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
