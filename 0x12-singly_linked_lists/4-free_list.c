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
if (head != NULL)
{
if (head->str != NULL)
free(head->str);
free(head);
}
head = head->next;
}
}
