#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list
 *
 * @head: head of list
 * @index: nth node of list
 * Return: nth node of list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int sizze;
dlistint_t *tp;

sizze = 0;
if (head == NULL)
	return (NULL);
tp = head;
while (tp)
{
if (index == sizze)
return (tp);
sizze++;
tp = tp->next;
}
return (NULL);
}
