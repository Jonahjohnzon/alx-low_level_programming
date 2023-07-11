#include "main.h"
#include <stdlib.h>
#define MAIN

/**
 * *str_concat - malloc
 * Description: ' function that creates an array of chars'
 * @s1: input
 * @s2: input
 * Return: Pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *addr;

	unsigned int count, alpha, alpha2, count2;

	alpha = 0;

	alpha2 = 0;

	while (s1 != NULL && *(s1 + alpha) != '\0')
	{
		alpha++;
	}

	while (s2 != NULL && *(s2 + alpha2) != '\0')
	{
		alpha2++;
	}
	addr = (char *) malloc((alpha + alpha2 + 1) * sizeof(char));

	if (addr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < alpha; count++)
	{
		addr[count] = s1[count];
	}
	for (count2 = 0; count2 < alpha2; count2++)
	{
	addr[count] = s2[count2];
	count++;
	}

	*(addr + count) = '\0';

	return (addr);
}
