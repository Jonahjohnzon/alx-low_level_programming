#include "lists.h"
/**
 * insert_nodeint_at_index - Add node
 * @head: input
 * @idx: index
 * @n: input
 * Return: listint
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;

	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (count = 0; tmp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
