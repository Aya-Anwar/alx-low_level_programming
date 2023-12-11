#include "lists.h"
/**
 * dlistint_t - adds a new node at the beginning of a dlistint_t list
 * @h: A pointer to the head of the list
 * @n: int of new node
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newnode = malloc(sizeof(dlistint_t));
    if (newnode == NULL)
    {
        return (NULL);
    }
    newnode->prev = NULL;
    newnode->n = n;
    newnode->next = *head;
    if (*head != NULL)
    {
    (*head)->prev = newnode;
    }
    *head = newnode;
    return (*head);   
}
