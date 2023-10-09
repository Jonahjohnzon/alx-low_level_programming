#include "hash_tables.h"

/**
 * hash_table_print - hash table
 * @ht: pointer
 * Description: print hash
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int x;
	unsigned char comflag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (comflag == 1)
			{
				printf(", ");
			}
			n = ht->array[x];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
				{
					printf(", ");
				}
			}
			comflag = 1;
		}
	}
	printf("}\n");
}
