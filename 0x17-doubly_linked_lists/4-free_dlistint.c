#include "lists.h"
/**
 * free_dlistint - frees all nodes of a list
 * @head: pointer to head node
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp->next != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
