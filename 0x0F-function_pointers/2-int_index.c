#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - print a name
 * @array: input
 * @size: input
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
