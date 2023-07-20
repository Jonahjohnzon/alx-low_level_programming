#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - print a name
 * @array: input
 * @size: input
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (!array || !size || !action)
	{
		return;
	}
	for (count = 0; count < size; count++)
	{
		action(array[count]);
	}
}
