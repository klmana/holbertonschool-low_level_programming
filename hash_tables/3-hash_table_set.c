#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table we want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 * value must be duplicated. value can be an empty string
 * index is the index of where the value/key will be input
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new, *temp;

	if (ht == NULL || key[0] == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	temp = ht->array[index];
	if (ht->array[index] != NULL && strcmp(key, (const char *)temp->key) == 0)
	{
		free(temp->value);
		free(new);
		temp->value = strdup(value);
		return (1);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
