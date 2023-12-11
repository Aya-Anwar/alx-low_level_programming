#include "lists.h"
/**
 * get_dnodeint_at_index - return node at given index
 * @head: pointer to head node
 * @index: the index of the node, starting from 0
 * Return: address of node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
