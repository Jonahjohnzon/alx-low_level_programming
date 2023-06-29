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
{
	int i;

	int e = 0;

	while (dest[e] != '\0')
	e++;

	for (i = 0; src[i] < n && src[i] != '\0'; i++)
	{
		dest[e] = src[i];
		e++;
	}
	dest[e] = '\0';

	return (dest);
}
