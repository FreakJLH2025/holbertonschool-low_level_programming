#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
* hash_table_set - adds an element to the hash table
* @ht: pointer to the hash table
* @key: key string (must not be empty)
* @value: value string (duplicated, can be empty)
*
* Return: 1 on success, 0 on failure
*
* Description: If the key already exists, update its value.
* In case of collision, add the new node at the beginning of the list.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *node, *tmp;
char *val_copy;

if (!ht || !key || !*key || !value)
return (0);
idx = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[idx];
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
{
val_copy = strdup(value);
if (!val_copy)
return (0);
free(tmp->value);
tmp->value = val_copy;
return (1);
}
tmp = tmp->next;
}
node = malloc(sizeof(hash_node_t));
if (!node)
return (0);
node->key = strdup(key);
if (!node->key)
{
free(node);
return (0);
}
node->value = strdup(value);
if (!node->value)
{
free(node->key);
free(node);
return (0);
}
node->next = ht->array[idx];
ht->array[idx] = node;
return (1);
}
