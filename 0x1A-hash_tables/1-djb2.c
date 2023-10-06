#include "hash_tables.h"

/**
 * hash_djb2 - djb2 algorithm.
 * @str: input
 * Return: calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ce;

	hash = 5381;
	while ((ce = *str++))
		hash = ((hash << 5) + hash) + ce;
	return (hash);
}
