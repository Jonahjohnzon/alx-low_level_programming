#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value
 * @n: number
 * @index: index
 * Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}
