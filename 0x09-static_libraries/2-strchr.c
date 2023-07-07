#include "main.h"
#include <stddef.h>
/**
 * *_strchr - Pointer
 * Description: 'function that locates a character in a string.'
 * @s: input
 * @c: input
 * Return: Pointer or Null
 */
char *_strchr(char *s, char c)
{
			int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
