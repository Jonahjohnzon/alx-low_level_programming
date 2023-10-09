#include "hash_tables.h"

/**
 * hash_table_set - Addhhashtabele
 * @ht: A pointer to the hash table.
 * @key: input
 * @value: input
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *table;
	char *value_ = strdup(value);
	unsigned long int index;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	if (value_ == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_;
			return (1);
		}
	}
	table = malloc(sizeof(hash_node_t));
	if (table == NULL)
	{
		free(value_);
		return (0);
	}
	table->key = strdup(key);
	if (table->key == NULL)
	{
		free(table);
		return (0);
	}
	table->value = value_;
	table->next = ht->array[index];
	ht->array[index] = table;

	return (1);
}
