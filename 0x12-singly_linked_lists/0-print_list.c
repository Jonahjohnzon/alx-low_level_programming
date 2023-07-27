#include "lists.h"
/**
 * print_list - function
 * Description: Function that prints all the elements of a list_t list
 * @h: input
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil\n)")
		}
		else
		{
			printf("[%u] %s/n", h->len, h->str)
		}
		h = h->next;
		count++;
	}
	return (count);
}
