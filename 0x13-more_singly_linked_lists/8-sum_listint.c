#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: pointer to first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
listint_t *temp = head;
int sum = 0;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
