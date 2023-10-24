void free_listint2(listint_t **head)
{
    listint_t *current;
    
    if (head == NULL)
        return;
    
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    *head = NULL;
}
