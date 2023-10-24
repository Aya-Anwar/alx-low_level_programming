#include "lists.h"
/**
 * listint_len - prints a linked lists
 * @h: pointer to first node
 * Return: size of list
*/
size_t listint_len(const listint_t *h)
{
const listint_t *temp = h;
size_t count;

if (temp == NULL)
{
return (0);
}
else
{
for (count = 0; temp != NULL; count++)
temp = temp->next;
}
return (count);

}
