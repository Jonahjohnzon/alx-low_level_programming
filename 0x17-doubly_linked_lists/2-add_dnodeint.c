#include "lists.h"
/**
 * add_dnodeint - Function
 * @head: pointer
 * @n: number
 * Return: pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list_h = *head;
	dlistint_t *new_list;

	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->prev = NULL;
	new_list->n = n;

	if (list_h != NULL)
	{
		while (list_h->prev != NULL)
		{
			list_h = list_h->prev;
		}
	}
	new_list->next = list_h;

	if (list_h != NULL)
	{
		list_h->prev = new_list;
	}
	*head = new_list;
	return (new_list);
}
