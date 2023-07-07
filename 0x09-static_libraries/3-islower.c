#include "main.h"
/**
 * _islower - check lower
 * @c: input
 * Description: 'check lower'
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
