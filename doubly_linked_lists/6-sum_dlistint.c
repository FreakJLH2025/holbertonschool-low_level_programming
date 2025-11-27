#include "lists.h"

/**
* sum_dlistint - returns the sum of all data (n) in a dlistint_t list
* @head: pointer to the head of the list
*
* Return: sum of all data, or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current;

for (current = head; current != NULL; current = current->next)
sum += current->n;

return (sum);
}
