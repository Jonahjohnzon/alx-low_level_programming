#include "main.h"
/**
 * rev_string - Pointers and string
 * Description: 'prints a string, in reverse'
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0;

	int second;

	int start2 = 0;

	while (s[start] != '\0')
	{
	start++;
	}
	for (second = start; second >= 0; second--)
	{
	(*(s + start2)) = (*(s + second - 1));
	start2++;
	}
}