#include "lists.h"
/**
 * print_dlistint - function
 * Description: print members of list
 * @h: pointer
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", list_h->n);
		no++;
		list_h = list_h->next;
	}
	return (no);
}
