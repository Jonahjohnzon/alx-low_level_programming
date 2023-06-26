#include "main.h"
/**
 * swap_int - Pointers
 * Description: 'Swap the values of two int'
 * @a: pointer
 * @b: pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *c;
	*c = *a;
	*a = *b;
	*b = *c;
}
