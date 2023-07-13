#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - malloc
 * Description: 'Function that allocates memory using malloc'
 * @b: input
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (unsigned int *) malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
