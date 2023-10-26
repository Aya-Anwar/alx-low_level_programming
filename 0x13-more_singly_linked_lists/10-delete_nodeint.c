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
listint_t *temp;
listint_t *temp2;
unsigned int i;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
temp = *head;
*head = temp->next;
free(temp);
return (1);
}
temp2 = *head;
for (i = 0; i < index; i++)
{
temp2 = temp2->next;
}
if (temp2 == NULL)
{
return (-1);
}
temp = temp2->next;
temp2->next = temp->next;
free(temp);
return (1);
}
