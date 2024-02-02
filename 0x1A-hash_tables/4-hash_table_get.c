#include "hash_tables.h"
/**
 * hash_table_get- function that retrieves value associated with akey.
 * @ht: hash table that contains key and values.
 * @key: key that points to value to be retrieved
 *
 * return: value associated with key or null if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
int index;
hash_node_t *item;
index = key_index((const unsigned char *)key, ht->size);
item = ht->array[index];

if (item != NULL)
{
if (strcmp(item->key, key) == 0)
	return (item->value);
}
return (NULL);
}
