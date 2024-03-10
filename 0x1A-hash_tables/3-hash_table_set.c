#include "hash_tables.h"

/**
 * hash_table_set - A function that add or update an element in a hash table.
 * @ht: A pointer to the hash table to set in.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key to set hash value.
 *
 * Return: on failure - 0.
 *         on success - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_copy;
	hash_node_t *new;
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
