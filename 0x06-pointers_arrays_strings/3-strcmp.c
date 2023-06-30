#include "main.h"
/**
 * _strcmp - Pointers and string
 * Description: Comparing two string
 * @s1: input
 * @s2: input
 * Return: numbers
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int z = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[z] != '\0')
	{
		z++;
	}
	if (i == z)
	{
		return (0);
	}
	else if (i > z)
	{
		return (i - z);
	}
	else
	{
		return (z - i);
	}
}
