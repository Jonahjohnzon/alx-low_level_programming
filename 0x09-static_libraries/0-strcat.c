#include "main.h"
/**
 * *_strcat - Pointers and array
 * Description: 'This function appends the src string '
 * @dest: input
 * @src: input
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int n = 0;

	while (dest[n] != '\0')
	n++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n] = src[i];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
