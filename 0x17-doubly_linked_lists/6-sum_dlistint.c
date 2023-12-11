#include "lists.h"
/**
 * dlistint_t - returns the sum of all the data (n)
 * @head: pointer to head node
 * Return: int sum of values
*/
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum =+ head->n;
        head = head->next;
    }
    return (sum);  
}
