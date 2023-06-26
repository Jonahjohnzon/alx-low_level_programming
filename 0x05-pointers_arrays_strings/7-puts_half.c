#include "main.h"
/**
 * puts_half - pointer and string
 * Description: 'prints every other character'
 * @str: character
 * Return: void
 */
void puts_half(char *str)
{	int start = 0;

	int start2;

	while (str[start] != '\0')
	{
		start++;
	}
	for (start2 = 0; start2 < start; start2++)
	{
		if (start2 > start / 2)
		{
			_putchar(*(str + start2));
		}
	}
	_putchar('\n');
}
