#include "lists.h"
/**
 * get_nodeint_at_index - Add node
 * @head: input
 * @index: index
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);

}
