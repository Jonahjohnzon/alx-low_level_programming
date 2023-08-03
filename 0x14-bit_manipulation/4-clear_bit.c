#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set
 * @n: pointe
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;
	unsigned int h;

	if (index > 64)
		return (-1);
	h = index;
	for (count = 1; h > 0; count *= 2, h--)
		;

	if ((*n >> index) & 1)
		*n -= count;

	return (1);
}
