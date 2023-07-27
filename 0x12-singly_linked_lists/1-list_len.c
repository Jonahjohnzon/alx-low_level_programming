#include <stdio.h>
#include "lists.h"
/**
 * list_len - function
 * Description: Function that prints all the elements of a list_t list
 * @h: input
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
