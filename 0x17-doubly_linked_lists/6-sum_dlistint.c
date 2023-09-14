#include "lists.h"
/**
 * sum_dlistint - function
 * @head: pointer
 * Description: sum numbers in list
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list_h = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (list_h != NULL)
	{
		sum += list_h->n;
		list_h = list_h->next;
	}
	return (sum);
}
