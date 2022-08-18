#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table
* @ht: defines which hash table the program should delete
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, *delete;

	if (ht == NULL || ht->array == NULL)
		return;
	if (ht->size != 0)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					delete = temp;
					temp = temp->next;
					free(delete->value);
					free(delete->key);
					free(delete);
				}
			}
			i = i + 1;
		}
		free(ht->array);
		free(ht);
	}
}
