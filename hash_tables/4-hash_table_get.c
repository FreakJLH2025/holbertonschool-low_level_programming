#include "hash_tables.h"
#include <string.h>

/**
* hash_table_get - retrieves a value associated with a key
* @ht: pointer to the hash table
* @key: key string to look for
*
* Return: value string if found, NULL otherwise
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *node;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

idx = key_index((const unsigned char *)key, ht->size);

for (node = ht->array[idx]; node != NULL; node = node->next)
{
if (strcmp(node->key, key) == 0)
return (node->value);
}

return (NULL);
}
