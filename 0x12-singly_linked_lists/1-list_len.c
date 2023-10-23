#include "lists.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t i;;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; h != NULL; i++)
		{
			temp = temp->next;
		}
	}
	return (i);
}
