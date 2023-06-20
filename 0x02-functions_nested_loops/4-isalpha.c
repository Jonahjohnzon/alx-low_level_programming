#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Check case
 * @c: Character to be checked
 * Description: 'Check for case difference'
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
