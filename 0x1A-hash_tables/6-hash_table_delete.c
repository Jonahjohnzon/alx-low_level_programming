#include "hash_tables.h"

/**
 * hash_table_delete - hash table
 * @ht: pointer hash
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *n;
	hash_node_t *tp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{

			n = ht->array[x];
			while (n != NULL)
			{
				tp = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = tp;
			}
		}
	}
	free(head->array);
	free(head);
}
