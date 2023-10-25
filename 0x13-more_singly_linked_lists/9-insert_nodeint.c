#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: address of pointer to first node
 * @idx: index to insert new node
 * @n: n value of new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *temp = *head;
unsigned int i;
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (i = 0; i < idx - 1; i++)
{
if (temp == NULL)
{
free(new_node);
return (NULL);
}
temp = temp->next;
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
