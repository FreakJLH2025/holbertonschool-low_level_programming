#include "hash_tables.h"

/**
* key_index - gives the index of a key
* @key: the key
* @size: size of the array of the hash table
*
* Return: index at which the key/value pair should be stored, or 0 if size is 0
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
if (size == 0)
return (0);
return (hash_djb2(key) % size);
}
