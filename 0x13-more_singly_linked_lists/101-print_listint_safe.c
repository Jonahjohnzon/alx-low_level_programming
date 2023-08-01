#include "lists.h"
/**
 * print_listint_safe - print node
 * @head: input
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t count = 0;
	size_t new;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		count++;
		tmp_n = tmp_n->next;
		l_n = head;
		new = 0;
		while (new < count)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (count);
			}
			l_n = l_n->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
