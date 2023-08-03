#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary
 * @n: base 10
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, shift = 0; (tmp >>= 1) > 0; shift++)
		;

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
