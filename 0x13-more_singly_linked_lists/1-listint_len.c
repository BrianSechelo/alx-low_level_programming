#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that returns the length of a list
 * @n: list data
 * @h: head of list
 * @next: next node
 *
 * Return: The number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

 if (h == NULL)
 return (0);
 while (h != NULL)
 {
count++;
h = h->next;
}
return (count);
}
