#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: const hash table for which the content has to be printed
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i = 0;
	char *separator = "";

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", separator, temp->key, temp->value);
			separator = ", ";
			temp = temp->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
