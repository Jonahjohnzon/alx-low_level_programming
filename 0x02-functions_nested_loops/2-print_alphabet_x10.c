#include "main.h"
/**
 * print_alphabet_x10 - Print function
 * Description: 'Print letters in ten'
 * Return: void
 */
void print_alphabet_x10(void)
{	char startone;

	char finishone = 'z';

	int count = 0;

	do {
	for (startone = 'a'; startone <= finishone; startone++)
	{
	_putchar(startone);
	_putchar('\n');
	}} while (count < 10);
}
