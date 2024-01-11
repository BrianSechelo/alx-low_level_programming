#include "lists.h"
/**
 * dlistint_t - function that adds a new node at the end of a dlistint_t list
 *
 * @head: head of list
 * @n: new node to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *h;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
        return (NULL);

new->n = n;
new->next = NULL;
h = *head;
if (h != NULL)
{
while (h->next != NULL)
        h = h->next;
h->next = new;
}
else
{
	*head = new;
}
new->prev = h;
return (new);
}
