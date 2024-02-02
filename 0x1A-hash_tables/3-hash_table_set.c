#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to add or update key/value to.
 * @key: key at which the hash table should be updated.
 * @value: value that is associated with the key
 *
 * Return: 1 if the element is added, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *temp_node;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Compute the index where the key-value pair will be stored */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists, if so, update its value */
    temp_node = ht->array[index];
    while (temp_node != NULL)
    {
        if (strcmp(temp_node->key, key) == 0)
        {
            /* Update the value */
            free(temp_node->value); /* Free previous value */
            temp_node->value = strdup(value); /* Set new value */
            if (temp_node->value == NULL)
                return (0);
            return (1);
        }
        temp_node = temp_node->next;
    }

    /* If key does not exist, create a new node and add it to the hash table */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Add the new node to the beginning of the linked list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
