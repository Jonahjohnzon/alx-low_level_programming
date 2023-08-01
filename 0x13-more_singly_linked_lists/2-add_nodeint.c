#include "lists.h"
/**
 * add_nodeint - Singly linked list
 * @n: input
 * @head: node
 * Description: add more nodes
 * Return: size_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;

	return (newnode);

}
