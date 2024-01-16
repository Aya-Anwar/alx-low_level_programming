#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_node = malloc(sizeof(hash_table_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->size = size;
	new_node->array = calloc(size, sizeof(hash_node_t *));
	if (new_node->array == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
