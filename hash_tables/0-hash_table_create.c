#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (array == NULL)
	{
		free(newTable);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i = i + 1;
	}

	newTable->size = size;
	newTable->array = array;

	return (newTable);
}
