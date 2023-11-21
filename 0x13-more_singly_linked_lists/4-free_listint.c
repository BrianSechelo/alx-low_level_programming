#include "lists.h"
/**
 * free_listint - frees a list of nodes
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
listint_t *temp = head;

if (head == NULL)
return;
while (temp->next != NULL)
{
temp = temp->next;
free(head);
head = temp;
}
free(head);
}
