#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
size_t print_list(const list_t *h)
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
            if (str == NULL)
            {
                return (nil);
            }
            else
            {
                printf("[%d] %s\n", h->len, h->str);
                p = p->next;
            }
            return (i);
        }
    }
}
