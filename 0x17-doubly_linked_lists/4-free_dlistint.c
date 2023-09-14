#include "lists.h"
/**
 * free_dlistint - function
 * @head: pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t tmp;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	tmp = head;
	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
