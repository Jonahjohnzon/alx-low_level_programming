#include "main.h"
/**
 * print_numbers - Print number
 * Description: 'Print fron 0 -9'
 * Return: Result
 */
void print_numbers(void)
{	int n = 0;

	do {

	putchar(n + '0');
	n++;
	} while (n <= 9);
	putchar('\n');
}
