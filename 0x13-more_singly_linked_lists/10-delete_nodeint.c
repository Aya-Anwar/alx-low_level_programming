#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: address of pointer to first node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *temp2 = *head;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
else
{
while (temp->next != NULL)
{
temp2 = temp;
temp = temp->next;
}
if (temp == NULL)
{
return (-1);
}
temp2->next = NULL;
free(temp);
temp = NULL;
}
return (1);
}
