#include "lists.h"
/**
 * pop_listint - DELETE head node
 * @head: input
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	int count;

	if (!head || !*head)
	{
		return (0);
	}
	count = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (count);

}
