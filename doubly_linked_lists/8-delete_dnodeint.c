#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);

temp = *head;

/* Delete head node */
if (index == 0)
{
*head = temp->next;
if (temp->next != NULL)
temp->next->prev = NULL;
free(temp);
return (1);
}

/* Traverse to the node before the one we want to delete */
while (temp != NULL)
{
if (i == index)
{
temp->prev->next = temp->next;

if (temp->next != NULL)
temp->next->prev = temp->prev;

free(temp);
return (1);
}
temp = temp->next;
i++;
}

return (-1);
}
