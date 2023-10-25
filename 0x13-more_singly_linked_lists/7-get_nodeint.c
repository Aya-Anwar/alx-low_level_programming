#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: pointer to first node
 * @index: index of node to get
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int count = 0;
while (temp != NULL)
{
if (count == index)
{
return (temp);
}
else
{
temp = temp->next;
count++;
}
}
return (NULL);
}
