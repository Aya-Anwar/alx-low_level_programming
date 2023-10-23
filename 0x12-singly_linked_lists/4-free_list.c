#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
while (head != NULL)
{
list_t *temp = head;
if (temp != NULL)
{
if (temp->str != NULL)
free(temp->str);
free(temp);
}
head = head->next;
}
}
