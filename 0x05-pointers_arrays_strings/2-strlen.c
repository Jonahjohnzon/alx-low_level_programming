#include "main.h"
/**
 * _strlen - pointers and strings
 * Description: 'a function that returns the length of a string'
 * @s: char string
 * Return: length of string
 */
int _strlen(char *s)
{	int start = 0;

	while (s[start] != '\0')
	{
	start++;
	}

	return (start);
}
