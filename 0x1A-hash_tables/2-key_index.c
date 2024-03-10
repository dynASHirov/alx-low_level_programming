#include "hash_tables.h"

/**
 * key_index - key/value pair should
 *             be stored in array of a hash table.
 * @key: The key to get/set in the has table.
 * @size: the size of the hash table
 * Return: Index of the array of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ind = 0;

	ind = hash_djb2((unsigned char *)key);
	return (ind % size);
}
