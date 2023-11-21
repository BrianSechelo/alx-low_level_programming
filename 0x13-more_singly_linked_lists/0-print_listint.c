#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_t - singly linked list
 * @n: list data
 * @h: head of list
 *
 * Return: The number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
int count = 0;
 if (h == NULL)
	 return (0);
 while (h != NULL)
 {
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
