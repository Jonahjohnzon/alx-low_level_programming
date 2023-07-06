#include "main.h"
/**
 * _print_rev_recursion - Recursion
 * Description: 'Write a function that prints a string, followed by a new line'
 * @s: input
 * Return void
 */
void _print_rev_recursion(char *s}
{	
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
