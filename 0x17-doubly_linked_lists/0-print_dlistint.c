#include "lists.h"
/**
 * print_dlistint - print doubly-linked list
 * @h: address of head node
 *
 * Return: size of list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		printf("\n");
		count++;
	}
	return (count);
}
