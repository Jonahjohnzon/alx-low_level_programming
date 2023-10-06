#include "hash_tables.h"

/**
 * key_index - Function
 * @key:  the index 
 * @size: array size
 * Return: int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
