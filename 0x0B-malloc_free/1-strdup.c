#include "main.h"
#include <stdlib.h>
#define MAIN

/**
 * *_strdup - malloc
 * Description: ' function that creates an array of chars'
 * @str: input
 * Return: Pointer or NULL
 */
char *_strdup(char *str)
{
	char *addr;

	unsigned int count, alpha;

	alpha = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + alpha) != '\0')
	{
		alpha++;
	}
	addr = (char *) malloc(alpha * sizeof(char));

	if (addr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < alpha; count++)
	{
		(addr + count) = (str + count);
	}

	return (addr);
}
