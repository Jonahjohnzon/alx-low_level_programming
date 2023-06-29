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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
