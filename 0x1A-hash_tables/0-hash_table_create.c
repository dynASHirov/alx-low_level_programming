#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - A function that creates a hash table.
 * @size: The size of hash table.
 * Return: A pointer to the new hash table in memory (heap).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *fresh_table = NULL;
	unsigned long int i = 0;

	fresh_table = malloc(sizeof(hash_table_t));
	if (!fresh_table)
		return (NULL);
	fresh_table->size = size;
	fresh_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!fresh_table->array)
	{
		free(fresh_table);
		return (NULL);
	}
	for (; i < size; i++)
		(fresh_table->array)[i] = NULL;
	return (fresh_table);
}
