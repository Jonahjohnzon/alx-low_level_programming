#include "main.h"
/**
 * *_strchr - Pointer
 * Description: 'function that locates a character in a string.'
 * @s: input
 * @c: input
 * Return: Pointer or Null
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	int countwo = 0;


	while (*(s[count]) != '\0')
	{
		count++;
	}
	while (countwo <= count)
	{
		if (*(s[count]) == c)
		{
		return (c);
		}
		else if (*(s[count]) != c && countwo == count)
		{
		return (NULL);
		}
		countwo++
	}
}
