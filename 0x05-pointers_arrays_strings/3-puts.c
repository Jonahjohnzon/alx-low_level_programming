#include "main.h"
/**
 * _puts - pointers and string
 * Description: 'prints a string, followed by a new line, to stdout'
 * @str: String
 * Return: void
 */
void _puts(char *str)
{	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
