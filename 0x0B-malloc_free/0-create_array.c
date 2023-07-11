#include "main.h"
#include <stdlib.h>
#define MAIN

/**
 * *create_array - malloc
 * Description: ' function that creates an array of chars'
 * @size: input
 * @c: char input
 * Return: Pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *addr;

	addr = (char *) malloc(size * sizeof(char));

	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	if (addr == NULL)
	{
		return (0);
	}

	for (count = 0; count < size; count)
	{
		*(addr + count) = c;
	}

	*(addr + 1) = '\0';

	return (addr);
}
