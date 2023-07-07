#include "main.h"
/**
 * _isalpha - check lower
 * @c: input
 * Description: 'Check lower'
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
