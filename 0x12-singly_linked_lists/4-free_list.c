#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *temp = head;


while (temp != NULL)
head = head->next;
free(temp->n);
free(temp);
temp = head;
}
