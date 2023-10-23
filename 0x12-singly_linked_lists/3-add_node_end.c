#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode = malloc(sizeof(list_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->str = strdup(str);
newnode->len = strlen(str);
newnode->next = NULL;
return (*head);
}
