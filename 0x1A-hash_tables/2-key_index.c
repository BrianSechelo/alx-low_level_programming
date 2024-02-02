#include "hash_tables.h"
/**
 * key_index - get the index at which a key value pair should 
 * be stored in an array of hashtable.
 * @key: the key to the index of
 * @size: the size of the array of the hash table.
 *
 * Return: the index of the key.
 * Descriprion: uses the djb2 algorithim
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
