#include "lists.h"
/**
 * dlistint_len - print number of elements in a linked
 * @h: address of head node
 *
 * Return: size of list
*/

size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
