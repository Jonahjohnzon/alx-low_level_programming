#include "lists.h"
/**
 * add_nodeint_end - Singly linked list
 * @n: input
 * @head: node
 * Description: add more nodes end
 * Return: size_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next =  newnode;
	return (newnode);

}
