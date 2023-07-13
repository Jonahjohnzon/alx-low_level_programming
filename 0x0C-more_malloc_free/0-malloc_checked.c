#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - malloc
 * Description: 'allocates memory using malloc'
 * @b: input
 * Return: pointer to allocate
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
