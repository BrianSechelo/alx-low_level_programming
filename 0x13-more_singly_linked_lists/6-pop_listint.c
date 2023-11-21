#include "lists.h"
/**
 * pop_listint - delete the first node of a list and return
 * its data
 * @head: the pointer to the list
 * Return: int
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int k;
if (head == NULL || *head == NULL)
return (0);
temp = *head;
k = (*head)->n;
*head = (*head)->next;
free(temp);
return (k);
}
