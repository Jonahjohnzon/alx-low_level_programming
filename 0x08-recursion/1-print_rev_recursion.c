#include "main.h"
/**
 * _puts_recursion - Recursion
 * Description: 'Write a function that prints a string, followed by a new line'
 * @s: input
 * Return void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
	s++;

	_puts_recursion(s);
	_putchar(*s);
	}
}
