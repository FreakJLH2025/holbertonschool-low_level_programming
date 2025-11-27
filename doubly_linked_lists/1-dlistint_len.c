#include "lists.h"

/**
* dlistint_len - returns the number of elements in a dlistint_t list
* @h: pointer to the head of the list
*
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current;

for (current = h; current != NULL; current = current->next)
count++;

return (count);
}
