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
while (head != NULL)
temp = head;
head = head->next;
free(temp);
}
}
