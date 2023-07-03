#include "main.h"
/**
 * *_memcpy - fill memory
 * @dest: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @src: memory to copy
 * Description: 'fill memory'
 * Return: a pointer to the memory area @s
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
