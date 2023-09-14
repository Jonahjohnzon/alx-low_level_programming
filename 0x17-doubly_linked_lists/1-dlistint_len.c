#include "lists.h"
/**
 * dlistint_len - function
 * Description: print members of list
 * @h: pointer
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *list_h = h;
	int no = 0;

	if (list_h == NULL)
	{
		return (0);
	}
	while (list_h->prev != NULL)
	{
		list_h = list_h->prev;
	}
	while (list_h != NULL)
	{
		no++;
		list_h = list_h->next;
	}
	return (no);
}
