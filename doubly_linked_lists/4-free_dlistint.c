#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - frees a dlistint_t list
* @head: pointer to the head of the list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *node;

for (node = head; node != NULL; )
{
dlistint_t *next = node->next;
free(node);
node = next;
}
}
