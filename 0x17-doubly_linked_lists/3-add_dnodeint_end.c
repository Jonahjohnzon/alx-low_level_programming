#include "lists.h"
/**
 * add_dnodeint_end - Function
 * @head: pointer
 * @n: number
 * Return: pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list_h = *head;
	dlistint_t *new_list;

	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->next = NULL;
	new_list->n = n;

	if (list_h != NULL)
	{
		while (list_h->next != NULL)
		{
			list_h = list_h->next;
		}
	list_h->next = new_list;
	}
	else
	{
		*head = new_list;
	}
	new_list->prev = list_h;
	return (new_list);
}
