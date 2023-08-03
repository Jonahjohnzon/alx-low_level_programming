#include "main.h"

/**
 * get_endianness - endianness
 * Return: 0  or 1
 */
int get_endianness(void)
{
	int numb;

	numb = 1;
	if (*(char *)&numb == 1)
		return (1);
	else
		return (0);
}
