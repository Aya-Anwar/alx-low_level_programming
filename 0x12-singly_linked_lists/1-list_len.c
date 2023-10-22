#include "lists.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
    size_t i;
    list_t *p;
    
    *h = p;
    if (h == NULL)
    {
        return (NULL);
    }
    else
    {
        for (i = 0; h != NULL; i++)
        {
            p = p->next;
        }
    }
    return (i);
}
