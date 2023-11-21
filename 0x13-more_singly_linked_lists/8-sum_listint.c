#include "lists.h"
/**
 * sum_listint: returns the sum of all data(n) in linked lists
 * @head: pointer to head of linked list
 * Return: sum of all data in list
*/
int sum_listint(listint_t *head)
{
    int sum = 0;
    if (head == NULL)
    return (0);
    while (head != NULL)
    {
    sum += head->n;
    head = head->next;
    }
    return (sum);
}
