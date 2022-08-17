#include "hash_tables.h"

/**
 * key_index -returns index of a key
 * @key: key for which we want the index
 * @size: the size of the array
 * Return: index where the key is stored hash table
 * we use the djb2 algorithm to determine where a key is stored and indexed
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
		return (0);

	index = hash_djb2(key);
	return (index % size);
}
