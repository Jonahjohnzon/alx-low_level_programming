#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 * Description: 'fill memory with a constant byte'
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
