#include"lists.h"
/**
 * print_list - print the data of the linked list
 * @h: pointer to the first node of the list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t i;

	if (temp == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; temp != NULL; i++)
		{
			if (temp->str == NULL)
			printf("[0] (nil)\n");
			else
			printf("[%d] %s\n", temp->len, temp->str);

			temp = temp->next;
		}
	}
	return (i);
}
