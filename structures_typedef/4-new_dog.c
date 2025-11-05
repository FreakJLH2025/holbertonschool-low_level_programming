#include <stdlib.h>
#include "dog.h"

/**
* new_dog - Creates a new dog with copies of name and owner
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
*
* Return: Pointer to new dog_t, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
char *n_copy, *o_copy;
int i, len_n = 0, len_o = 0;

if (name == NULL || owner == NULL)
return (NULL);

while (name[len_n] != '\0')
len_n++;
while (owner[len_o] != '\0')
len_o++;

new = malloc(sizeof(dog_t));
if (new == NULL)
return (NULL);

n_copy = malloc(sizeof(char) * (len_n + 1));
if (n_copy == NULL)
{
free(new);
return (NULL);
}

o_copy = malloc(sizeof(char) * (len_o + 1));
if (o_copy == NULL)
{
free(n_copy);
free(new);
return (NULL);
}

for (i = 0; i <= len_n; i++)
n_copy[i] = name[i];
for (i = 0; i <= len_o; i++)
o_copy[i] = owner[i];

new->name = n_copy;
new->age = age;
new->owner = o_copy;

return (new);
}
