#include "main.h"
/**
 * _isalpha - check lower
 * @c: input
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
