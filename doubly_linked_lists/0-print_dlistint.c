#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: pointer to the head of the list
*
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

if (h == NULL)
return (0);

do {
printf("%d\n", h->n);
count++;
h = h->next;
} while (h != NULL);

return (count);
}
