#include "lists.h"

/**
 * pop_listint - pops head node of list
 * @head: address of pointer to first node
 *
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;
if (head == NULL)
{
return (0);
}

temp = *head;
*head = (*head)->next;
data = temp->n;
free(temp);
return (data);
}
