#include "lists.h"
/**
 * insert_dnodeint_at_index - function
 * @h: input
 * @idx: index
 * @n: number
 * Return: pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_list = NULL;
	dlistint_t *hd;
	unsigned int count= 1;

	if (idx == 0)
	{
		new_list = add_dnodeint(h, n);
	}
	else
	{
		hd = *h;
		if (hd != NULL)
		{
			while (hd->prev != NULL)
				hd = hd->prev;
		}
		while (hd != NULL)
		{
			if (count == idx)
			{
				if (hd->next == NULL)
					new_list = add_dnodeint_end(h, n);
				else
				{
					new_list = malloc(sizeof(dlistint_t));
					if (new_list != NULL)
					{
						new_list->n = n;
						new_list->next = hd->next;
						new_list->prev = hd;
						hd->next->prev = new_list;
						hd->next = new_list;
					}
				}
				break;
			}
			hd = hd->next;
			count++;
		}
	}

	return (new_list);
}
