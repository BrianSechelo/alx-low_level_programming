#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints hash table.
 * @ht: hash table.
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    int printed = 0;

    if (ht == NULL) {
        printf("{}\n");
        return;
    }

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            if (printed == 1)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            printed = 1;
            node = node->next;
        }
    }
    printf("}\n");
}
