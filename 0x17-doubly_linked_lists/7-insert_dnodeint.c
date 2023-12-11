#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: pointer to head node
 * @idx: the index of the list where the new node
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int i;

	if (new_node == NULL)
	{
		return (NULL); }
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node); }
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next; }
	if (temp == NULL)
	{
		free(new_node);
		return (NULL); }
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = new_node; }
	temp->next = new_node;
	return (new_node); }
