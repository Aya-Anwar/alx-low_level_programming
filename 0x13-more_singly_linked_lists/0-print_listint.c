#include"lists.h"
/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 * Return: size of list
*/
size_t print_listint(const listint_t *h)
{
size_t count;
const listint_t *temp =  h;
if (temp == NULL)
{
return (0);
}
else
{
for (count = 0; temp != NULL; count++)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
return (count);
}
