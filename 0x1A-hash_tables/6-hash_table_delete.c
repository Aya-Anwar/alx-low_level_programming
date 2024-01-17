#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *ptr;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			ptr = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = ptr;
		}
	}
	free(ht);
}
