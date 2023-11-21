#include "lists.h"
/**
 * add_nodeint:  a function that adds a new node at the beginning of a list
 * @head: pointer to the head pointer of list
 * @n: data in a list node
 * Return: addess of new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;
return (NULL);
if (head == NULL)
ptr = malloc (sizeof(listint_t));
if (ptr == NULL)
return (NULL);
if (*head == NULL)
ptr->next = NULL;
else
ptr->next = *head;
ptr->n = n;
*head = ptr;

return (*head);
}
