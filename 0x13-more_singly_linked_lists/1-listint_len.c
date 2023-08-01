#include "lists.h"
/**
 * listint_len - Singly linked list
 * @h: input
 * Description: function that prints all the elements of a listint_t list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
