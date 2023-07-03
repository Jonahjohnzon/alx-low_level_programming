#include "main.h"
/**
 * *_memcpy: function
 * Description: 'it copies memory area'
 * @dest: input
 * @src: input
 * @n: input
 * Return : pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
