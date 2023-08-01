#include "lists.h"
/**
 * add_nodeint - Singly linked list
 * @h: input
 * Description: function that prints all the elements of a listint_t list
 * Return: size_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return(NULL);
	}
	newnode->n = n;
	newnode->next = *head;


	return (newnode);

}
