#include "lists.h"
/**
 * add_nodeint_end:  a function that adds a new node at the end of a list
 * @head: pointer to the head pointer of list
 * @n: data in a list node
 * Return: addess of new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr;
listint_t *temp;
return (NULL);
if (head == NULL)
ptr = malloc (sizeof(listint_t));
temp = malloc (sizeof(listint_t));
temp->n = n;
temp->next = NULL;
ptr = *head;

if (ptr == NULL)
return (NULL);
if (*head == NULL)
ptr->next = NULL;
while (ptr->next != NULL)
{
    ptr = ptr->next;
}
ptr->next = temp;
return (ptr->next);
}

