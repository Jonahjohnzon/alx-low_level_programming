#include "main.h"
/**
 * _isupper - case checker
 * Description: 'Alphabet checker'
 * @c: character input
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
	return (1);
	}
	else if (c >= 'a' || c <= 'z')
	{
	return (0);
	}
	else
	{
	return (2);
	}
}
