#include "main.h"
/**
 * *_strncat - Pointers and array
 * Description: 'This function appends the src string '
 * @dest: input
 * @src: input
 * @n: input
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
