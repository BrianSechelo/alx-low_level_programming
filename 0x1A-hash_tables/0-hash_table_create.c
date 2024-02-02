#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * size - size of hasg table
 * Return - if an error occurs return null
 *           else return pointer to table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table = malloc(sizeof(hash_table_t));
unsigned long int i;
if (table == NULL)
	return (NULL);
table->size = size;
table->array = malloc(sizeof(hash_table_t) * size);
if (table->array == NULL)
	return (NULL);

for (i = 0; i < size; i++)
	table->array[i] = NULL;
return (table);

}
