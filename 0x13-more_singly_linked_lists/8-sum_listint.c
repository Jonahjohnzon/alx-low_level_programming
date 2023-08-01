#include "lists.h"
/**
 * sum_listint - Add node
 * @head: input
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tep = head;

	while (tep)
	{
		sum += tep->n;
		tep = tep->next;
	}

	return (sum);

}
