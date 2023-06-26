#include "main.h"
/**
 * puts2 - pointer and string
 * Description: 'prints every other character'
 * @str: character
 * Return: void
 */
void puts2(char *str)
{	int start = 0;

	int start2;

	while (str[start] != '\0')
	{
		start++;
	}
	for (start2 = 0; start2 <= start; start2++)
	{
		if (start2 % 2 == 0)
		{
			_putchar(*(str + start2));
		}
	}
}
