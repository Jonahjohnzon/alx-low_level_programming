#include "lists.h"
/**
 * free_listint - free linked list
 * @head: listint_t input
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
