#include "lists.h"
/**
 * get_nodeint_at_index: function that returns the nth node of a list
 * @head: head of a linked list
 * @index: the index of the nth element to be printed
 * Return: nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *ptr = NULL;
    unsigned int count = 0;
    if (head == NULL)
    return (0);
  ptr = head;
  while (ptr != NULL)
  {
    ptr = ptr->next;
    count++;
    if (count == index)
    ptr = ptr->next;
      }
      if (count < index)
      {
      return (0);
      }
      return (ptr);

}
