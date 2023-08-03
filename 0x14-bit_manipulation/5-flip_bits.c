#include "main.h"
#include <stdio.h>

/**
 * flip_bits - convert one number to another number
 * @n: first
 * @m: second
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int count;

	d = n ^ m;
	count = 0;

	while (d)
	{
		count++;
		d &= (d - 1);
	}

	return (count);
}
