#include "main.h"

/**
 * string_toupper - changes all lowercase to upper
 * Description: 'change cases'
 * @s: string to modify
 * Return: the result
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
